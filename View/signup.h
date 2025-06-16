#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include <QSoundEffect>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QRegularExpression>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class signup; }
QT_END_NAMESPACE

class signup : public QDialog
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();

private slots:
    void on_pushButton_Register_clicked();
    void validateInput();

private:
    // UI and database methods
    void setupInputValidation();
    bool registerUser(const QString& username, const QByteArray& passwordHash);
    void showMessage(const QString& message, QMessageBox::Icon icon = QMessageBox::Information);

    // Member variables
    Ui::signup *ui;
    QSoundEffect clickSound;
    QSqlDatabase m_db;
};

#endif // SIGNUP_H
