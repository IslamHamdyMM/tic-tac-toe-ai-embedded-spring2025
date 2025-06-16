/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_title;
    QLabel *label_game;
    QLabel *label_signin;
    QFormLayout *formLayout;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLabel *label;
    QLabel *label_2;
    QCheckBox *checkBox_showpassword;
    QPushButton *pushButton_login;
    QPushButton *pushButton_signup;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(400, 516);
        centralwidget = new QWidget(MainPage);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label_title = new QLabel(centralwidget);
        label_title->setObjectName("label_title");
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_title);

        label_game = new QLabel(centralwidget);
        label_game->setObjectName("label_game");
        label_game->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_game);

        label_signin = new QLabel(centralwidget);
        label_signin->setObjectName("label_signin");
        label_signin->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_signin);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName("lineEdit_username");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, lineEdit_username);

        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, lineEdit_password);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, label);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, label_2);


        verticalLayout->addLayout(formLayout);

        checkBox_showpassword = new QCheckBox(centralwidget);
        checkBox_showpassword->setObjectName("checkBox_showpassword");

        verticalLayout->addWidget(checkBox_showpassword);

        pushButton_login = new QPushButton(centralwidget);
        pushButton_login->setObjectName("pushButton_login");

        verticalLayout->addWidget(pushButton_login);

        pushButton_signup = new QPushButton(centralwidget);
        pushButton_signup->setObjectName("pushButton_signup");

        verticalLayout->addWidget(pushButton_signup);

        MainPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 26));
        MainPage->setMenuBar(menubar);
        statusbar = new QStatusBar(MainPage);
        statusbar->setObjectName("statusbar");
        MainPage->setStatusBar(statusbar);

        retranslateUi(MainPage);

        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QMainWindow *MainPage)
    {
        MainPage->setWindowTitle(QCoreApplication::translate("MainPage", "Tic Tac Toe", nullptr));
        MainPage->setStyleSheet(QCoreApplication::translate("MainPage", "\n"
"      QMainWindow { background-color: #ffffff; }\n"
"      QLabel { font: 20pt \"Arial\"; color: #34495e; }\n"
"      QLineEdit { border: 2px solid #bdc3c7; border-radius: 5px; padding: 5px; font: 12pt \"Arial\"; color: #34495e; }\n"
"      QLineEdit:focus { border-color: #3498db; }\n"
"      QCheckBox { font: 12pt \"Arial\"; color: #34495e; }\n"
"      QPushButton { background-color: #34495e; color: #ffffff; border-radius: 5px; padding: 10px; font: 12pt \"Arial\"; }\n"
"      QPushButton:hover { background-color: #2c3e50; }\n"
"      QPushButton:pressed { background-color: #1f2a38; }\n"
"     ", nullptr));
        label_title->setText(QCoreApplication::translate("MainPage", "TIC TAC TOE", nullptr));
        label_game->setStyleSheet(QCoreApplication::translate("MainPage", "font: 24pt \"Arial\"; color: #34495e;", nullptr));
        label_game->setText(QCoreApplication::translate("MainPage", "\342\227\213\303\227\342\227\213\n"
"\303\227\342\227\213\303\227\n"
"\303\227\342\227\213\342\227\213", nullptr));
        label_signin->setText(QCoreApplication::translate("MainPage", "Sign In", nullptr));
        lineEdit_username->setText(QString());
        lineEdit_password->setText(QString());
        label->setText(QCoreApplication::translate("MainPage", "User Name", nullptr));
        label_2->setText(QCoreApplication::translate("MainPage", "Password", nullptr));
        checkBox_showpassword->setText(QCoreApplication::translate("MainPage", "Show password", nullptr));
        pushButton_login->setText(QCoreApplication::translate("MainPage", "Log In", nullptr));
        pushButton_signup->setText(QCoreApplication::translate("MainPage", "Create New Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
