#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>

namespace Ui {
class MainPage;
}

class MainPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();

private slots:
    void on_pushButton_login_clicked();
    void on_checkBox_showpassword_stateChanged(int state);
    void on_pushButton_signup_clicked();

private:
    Ui::MainPage *ui;
    QSqlDatabase m_db;
    bool verifyLogin(const QString& username, const QString& password);
};

#endif // MAINPAGE_H
