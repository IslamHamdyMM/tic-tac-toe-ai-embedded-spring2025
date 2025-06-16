#include "signup.h"
#include "ui_signup.h"
#include <QMessageBox>
#include <QPixmap>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QLabel>
#include <QDebug>
#include "mainpage.h"
#include <QCryptographicHash> // Include for password hashing
#include <QRegularExpression>
#include "TTTCommonTypes.h"

signup::signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);

    setWindowIcon(QIcon(":/images/images/icon1.png"));
    setWindowTitle("Tic Tac Toe - Sign Up");  // Set the custom title text

    // Initialize sound effect
    clickSound.setSource(QUrl::fromLocalFile(":/images/images/click_sound.wav"));
    clickSound.setVolume(0.1f);  // Set volume to 10%

    // Create database connection
    m_db = QSqlDatabase::addDatabase("QSQLITE", "signup_connection");
    m_db.setDatabaseName("game_database.db");

    if (!m_db.open()) {
        QMessageBox messageBox(this);
        messageBox.setText("Failed to connect to database: " + m_db.lastError().text());
        messageBox.setStyleSheet("QMessageBox { background-color: #f5f5f5; } QLabel { color: #333333; }");
        messageBox.setIcon(QMessageBox::Critical);
        messageBox.exec();
    } else {
        qDebug() << "Database connection successful.";

        // Create 'users' table if not exists
        QSqlQuery query(m_db);
        if (!query.exec("CREATE TABLE IF NOT EXISTS users (username TEXT PRIMARY KEY, password TEXT)")) {
            qDebug() << "Error creating table:" << query.lastError().text();
        }
    }

    // Set input validation
    setupInputValidation();
}

signup::~signup()
{
    if (m_db.isOpen()) {
        m_db.close();
    }
    delete ui;
}

void signup::setupInputValidation()
{
    // Set maximum length for inputs
    ui->lineEdit_username->setMaxLength(20);
    ui->lineEdit_password->setMaxLength(50);
    ui->lineEdit_password_2->setMaxLength(50);

    // Connect input validation
    connect(ui->lineEdit_username, &QLineEdit::textChanged, this, &signup::validateInput);
    connect(ui->lineEdit_password, &QLineEdit::textChanged, this, &signup::validateInput);
    connect(ui->lineEdit_password_2, &QLineEdit::textChanged, this, &signup::validateInput);
}

void signup::validateInput()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    QString confirmPassword = ui->lineEdit_password_2->text();

    // Enable/disable register button based on input validation
    bool isValid = !username.isEmpty() &&
                   !password.isEmpty() &&
                   !confirmPassword.isEmpty() &&
                   username.length() >= 3 &&
                   password.length() >= 6;

    ui->pushButton_Register->setEnabled(isValid);
}

void signup::on_pushButton_Register_clicked()
{
    // Play click sound
    clickSound.play();

    QString username = ui->lineEdit_username->text().trimmed();
    QString password = ui->lineEdit_password->text();
    QString confirmPassword = ui->lineEdit_password_2->text();

    qDebug() << "Registration attempt for username:" << username;

    // Input validation
    if (username.isEmpty() || password.isEmpty() || confirmPassword.isEmpty()) {
        showMessage("Please fill in all fields.", QMessageBox::Warning);
        return;
    }

    if (username.length() < 3) {
        showMessage("Username must be at least 3 characters long.", QMessageBox::Warning);
        return;
    }

    if (password.length() < 6) {
        showMessage("Password must be at least 6 characters long.", QMessageBox::Warning);
        return;
    }

    if (password != confirmPassword) {
        showMessage("Passwords do not match.", QMessageBox::Warning);
        return;
    }

    // Check for invalid characters in username
    QRegularExpression usernameRegex("^[a-zA-Z0-9_]+$");
    if (!usernameRegex.match(username).hasMatch()) {
        showMessage("Username can only contain letters, numbers, and underscores.", QMessageBox::Warning);
        return;
    }

    // Hash the password using SHA-256
    QByteArray passwordHash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex();

    if (registerUser(username, passwordHash)) {
        showMessage("Registration successful!", QMessageBox::Information);

        // Show main page after successful registration
        this->hide();
        MainPage *mainWindow = new MainPage();
        mainWindow->show();

        // Close this dialog
        this->accept();
    } else {
        showMessage("Failed to register user. Username may already exist.", QMessageBox::Critical);
    }
}

bool signup::registerUser(const QString& username, const QByteArray& passwordHash)
{
    if (!m_db.isOpen()) {
        qDebug() << "Database connection is not open.";
        return false;
    }

    if (username.isEmpty() || passwordHash.isEmpty()) {
        qDebug() << "Username or password hash is empty.";
        return false;
    }

    // Check if user already exists
    QSqlQuery checkQuery(m_db);
    checkQuery.prepare("SELECT COUNT(*) FROM users WHERE username = :username");
    checkQuery.bindValue(":username", username);

    if (!checkQuery.exec()) {
        qDebug() << "Error checking existing user:" << checkQuery.lastError().text();
        return false;
    }

    if (checkQuery.next() && checkQuery.value(0).toInt() > 0) {
        qDebug() << "User already exists:" << username;
        return false;
    }

    // Insert new user
    if (!m_db.transaction()) {
        qDebug() << "Failed to start database transaction.";
        return false;
    }

    QSqlQuery insertQuery(m_db);
    insertQuery.prepare("INSERT INTO users (username, password) VALUES (:username, :password)");
    insertQuery.bindValue(":username", username);
    insertQuery.bindValue(":password", passwordHash);

    if (!insertQuery.exec()) {
        qDebug() << "Error executing insert query:" << insertQuery.lastError().text();
        m_db.rollback();
        return false;
    }

    if (!m_db.commit()) {
        qDebug() << "Failed to commit database transaction.";
        m_db.rollback();
        return false;
    }

    qDebug() << "User registered successfully:" << username;
    return true;
}

void signup::showMessage(const QString& message, QMessageBox::Icon icon)
{
    QMessageBox messageBox(this);
    messageBox.setText(message);
    messageBox.setStyleSheet(
        "QMessageBox { "
        "background-color: #f5f5f5; "
        "} "
        "QLabel { "
        "color: #333333; "
        "font-size: 14px; "
        "} "
        "QPushButton { "
        "background-color: #2c5282; "
        "color: white; "
        "border: none; "
        "border-radius: 5px; "
        "padding: 8px 16px; "
        "font-weight: bold; "
        "} "
        "QPushButton:hover { "
        "background-color: #2a4d7a; "
        "}"
        );
    messageBox.setIcon(icon);
    messageBox.exec();
}
