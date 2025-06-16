#include "mainpage.h"
#include "ui_mainpage.h"
#include <QMessageBox>
#include <QApplication>
#include <QSqlDatabase>
#include <QCryptographicHash>
#include <QDebug>
#include "profile.h" // Include profile header
#include "signup.h" // Include signup header

QString username, password;

MainPage::MainPage(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainPage)
{
    ui->setupUi(this);
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("game_database.db");
    if (!m_db.open()) {
        QMessageBox::information(this, "Error", "Failed to connect to database: " + m_db.lastError().text());
    } else {
        QSqlQuery query(m_db);
        query.exec("CREATE TABLE IF NOT EXISTS users (username TEXT PRIMARY KEY, password TEXT)");
    }
}

MainPage::~MainPage()
{
    delete ui;
}

bool MainPage::verifyLogin(const QString& username, const QString& password)
{
    if (!m_db.isOpen()) return false;
    QSqlQuery query(m_db);
    query.prepare("SELECT password FROM users WHERE username = :username");
    query.bindValue(":username", username);
    if (!query.exec() || !query.next()) return false;
    QByteArray storedPasswordHash = query.value(0).toByteArray();
    QByteArray enteredPasswordHash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex();
    return enteredPasswordHash == storedPasswordHash;
}

void MainPage::on_pushButton_login_clicked()
{
    username = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();
    if (verifyLogin(username, password)) {
        this->hide();
        Profile *profile = new Profile();
        profile->show();
    } else {
        QMessageBox::warning(this, "Login", "Invalid username or password");
    }
}

void MainPage::on_checkBox_showpassword_stateChanged(int state)
{
    ui->lineEdit_password->setEchoMode(state == Qt::Checked ? QLineEdit::Normal : QLineEdit::Password);
}

void MainPage::on_pushButton_signup_clicked()
{
    this->hide();
    signup *signupp = new signup();
    signupp->show();
}
