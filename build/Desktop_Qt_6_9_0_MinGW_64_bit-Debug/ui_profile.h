/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QLabel *titleLabel;
    QLabel *welcomeLabel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *start;
    QPushButton *profile;
    QPushButton *how;
    QPushButton *logOut;

    void setupUi(QDialog *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName("Profile");
        Profile->resize(529, 439);
        Profile->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-color: #f5f5f5;\n"
"   }"));
        titleLabel = new QLabel(Profile);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(0, 30, 529, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(24);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #2c3e50;\n"
"     background: transparent;\n"
"    }"));
        titleLabel->setAlignment(Qt::AlignCenter);
        welcomeLabel = new QLabel(Profile);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(0, 90, 529, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(16);
        font1.setBold(false);
        welcomeLabel->setFont(font1);
        welcomeLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     color: #34495e;\n"
"     background: transparent;\n"
"    }"));
        welcomeLabel->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(Profile);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(160, 150, 210, 240));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        start = new QPushButton(layoutWidget);
        start->setObjectName("start");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(start->sizePolicy().hasHeightForWidth());
        start->setSizePolicy(sizePolicy);
        start->setMinimumSize(QSize(200, 45));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(14);
        font2.setBold(false);
        start->setFont(font2);
        start->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"        background-color: transparent;\n"
"        color: #2c3e50;\n"
"        border: 2px solid #2c3e50;\n"
"        border-radius: 25px;\n"
"        font-weight: normal;\n"
"        padding: 12px 24px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"        background-color: #ecf0f1;\n"
"        color: #2c3e50;\n"
"        border: 2px solid #2c3e50;\n"
"}\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"        background-color: #bdc3c7;\n"
"        color: #2c3e50;\n"
"        border: 2px solid #2c3e50;\n"
"}"));

        verticalLayout->addWidget(start);

        profile = new QPushButton(layoutWidget);
        profile->setObjectName("profile");
        sizePolicy.setHeightForWidth(profile->sizePolicy().hasHeightForWidth());
        profile->setSizePolicy(sizePolicy);
        profile->setMinimumSize(QSize(200, 45));
        profile->setFont(font2);
        profile->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"        background-color: transparent;\n"
"        color: #2c3e50;\n"
"        border: 2px solid #2c3e50;\n"
"        border-radius: 25px;\n"
"        font-weight: normal;\n"
"        padding: 12px 24px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"        background-color: #ecf0f1;\n"
"        color: #2c3e50;\n"
"        border: 2px solid #2c3e50;\n"
"}\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"        background-color: #bdc3c7;\n"
"        color: #2c3e50;\n"
"        border: 2px solid #2c3e50;\n"
"}"));

        verticalLayout->addWidget(profile);

        how = new QPushButton(layoutWidget);
        how->setObjectName("how");
        sizePolicy.setHeightForWidth(how->sizePolicy().hasHeightForWidth());
        how->setSizePolicy(sizePolicy);
        how->setMinimumSize(QSize(200, 45));
        how->setFont(font2);
        how->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"        background-color: transparent;\n"
"        color: #2c3e50;\n"
"        border: 2px solid #2c3e50;\n"
"        border-radius: 25px;\n"
"        font-weight: normal;\n"
"        padding: 12px 24px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"        background-color: #ecf0f1;\n"
"        color: #2c3e50;\n"
"        border: 2px solid #2c3e50;\n"
"}\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"        background-color: #bdc3c7;\n"
"        color: #2c3e50;\n"
"        border: 2px solid #2c3e50;\n"
"}"));

        verticalLayout->addWidget(how);

        logOut = new QPushButton(layoutWidget);
        logOut->setObjectName("logOut");
        sizePolicy.setHeightForWidth(logOut->sizePolicy().hasHeightForWidth());
        logOut->setSizePolicy(sizePolicy);
        logOut->setMinimumSize(QSize(200, 45));
        logOut->setFont(font2);
        logOut->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"        background-color: #34495e;\n"
"        color: white;\n"
"        border: 2px solid #34495e;\n"
"        border-radius: 25px;\n"
"        font-weight: normal;\n"
"        padding: 12px 24px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"        background-color: #2c3e50;\n"
"        color: white;\n"
"        border: 2px solid #2c3e50;\n"
"}\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"        background-color: #1a252f;\n"
"        color: white;\n"
"        border: 2px solid #1a252f;\n"
"}"));

        verticalLayout->addWidget(logOut);


        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QDialog *Profile)
    {
        Profile->setWindowTitle(QCoreApplication::translate("Profile", "Dialog", nullptr));
        titleLabel->setText(QCoreApplication::translate("Profile", "TIC TAC TOE", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("Profile", "Welcome Back!", nullptr));
        start->setText(QCoreApplication::translate("Profile", "Play", nullptr));
        profile->setText(QCoreApplication::translate("Profile", "Player History", nullptr));
        how->setText(QCoreApplication::translate("Profile", "How to play", nullptr));
        logOut->setText(QCoreApplication::translate("Profile", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
