/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QWidget *centralWidget;
    QVBoxLayout *mainLayout;
    QLabel *titleLabel;
    QSpacerItem *topSpacer;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_password_2;
    QSpacerItem *bottomSpacer;
    QHBoxLayout *buttonLayout;
    QSpacerItem *leftButtonSpacer;
    QPushButton *pushButton_Register;
    QSpacerItem *rightButtonSpacer;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(645, 420);
        signup->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-color: #f5f5f5;\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #2c5282;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    background-color: #ffffff;\n"
"    color: #333333;\n"
"    border: 2px solid #3182ce;\n"
"    border-radius: 8px;\n"
"    padding: 10px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #2c5282;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #2c5282;\n"
"    color: #ffffff;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-weight: bold;\n"
"    padding: 12px 24px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2a4d7a;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1a365d;\n"
"}"));
        centralWidget = new QWidget(signup);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setGeometry(QRect(40, 30, 565, 360));
        mainLayout = new QVBoxLayout(centralWidget);
        mainLayout->setSpacing(20);
        mainLayout->setObjectName("mainLayout");
        mainLayout->setContentsMargins(40, 40, 40, 40);
        titleLabel = new QLabel(centralWidget);
        titleLabel->setObjectName("titleLabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(24);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);

        mainLayout->addWidget(titleLabel);

        topSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        mainLayout->addItem(topSpacer);

        lineEdit_username = new QLineEdit(centralWidget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setMinimumSize(QSize(0, 50));

        mainLayout->addWidget(lineEdit_username);

        lineEdit_password = new QLineEdit(centralWidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setMinimumSize(QSize(0, 50));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        mainLayout->addWidget(lineEdit_password);

        lineEdit_password_2 = new QLineEdit(centralWidget);
        lineEdit_password_2->setObjectName("lineEdit_password_2");
        lineEdit_password_2->setMinimumSize(QSize(0, 50));
        lineEdit_password_2->setEchoMode(QLineEdit::Password);

        mainLayout->addWidget(lineEdit_password_2);

        bottomSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        mainLayout->addItem(bottomSpacer);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        leftButtonSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonLayout->addItem(leftButtonSpacer);

        pushButton_Register = new QPushButton(centralWidget);
        pushButton_Register->setObjectName("pushButton_Register");
        pushButton_Register->setMinimumSize(QSize(200, 50));

        buttonLayout->addWidget(pushButton_Register);

        rightButtonSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonLayout->addItem(rightButtonSpacer);


        mainLayout->addLayout(buttonLayout);


        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Sign Up", nullptr));
        titleLabel->setText(QCoreApplication::translate("signup", "SIGN UP", nullptr));
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("signup", "Enter Username", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("signup", "Enter Password", nullptr));
        lineEdit_password_2->setPlaceholderText(QCoreApplication::translate("signup", "Confirm Password", nullptr));
        pushButton_Register->setText(QCoreApplication::translate("signup", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
