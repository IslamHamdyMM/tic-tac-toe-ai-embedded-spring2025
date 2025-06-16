/********************************************************************************
** Form generated from reading UI file 'playerhistory.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERHISTORY_H
#define UI_PLAYERHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Playerhistory
{
public:
    QComboBox *gameComboBox;
    QPushButton *return_2;
    QLabel *titleLabel;
    QLabel *name;
    QLabel *gamesPlayedLabel;
    QLabel *gameplayedd;
    QLabel *gamesWonLabel;
    QLabel *winsLabel;
    QLabel *gamesLoseLabel;
    QLabel *lossesLabel;
    QLabel *gamesDrawnLabel;
    QLabel *drawsLabel;

    void setupUi(QDialog *Playerhistory)
    {
        if (Playerhistory->objectName().isEmpty())
            Playerhistory->setObjectName("Playerhistory");
        Playerhistory->resize(641, 400);
        Playerhistory->setStyleSheet(QString::fromUtf8(""));
        gameComboBox = new QComboBox(Playerhistory);
        gameComboBox->setObjectName("gameComboBox");
        gameComboBox->setGeometry(QRect(50, 280, 541, 35));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(false);
        gameComboBox->setFont(font);
        gameComboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: white;\n"
"    border: 2px solid #cccccc;\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"    font-size: 12px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    border: none;\n"
"    width: 30px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: none;\n"
"    border-left: 5px solid transparent;\n"
"    border-right: 5px solid transparent;\n"
"    border-top: 8px solid #666666;\n"
"    margin-right: 10px;\n"
"}"));
        return_2 = new QPushButton(Playerhistory);
        return_2->setObjectName("return_2");
        return_2->setGeometry(QRect(265, 340, 111, 41));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(return_2->sizePolicy().hasHeightForWidth());
        return_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(true);
        return_2->setFont(font1);
        return_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"        background-color: #2c5f7a;\n"
"        color: white;\n"
"        border-style: solid;\n"
"        border-radius: 20px;\n"
"        border: none;\n"
"        font-weight: bold;\n"
"        padding: 10px 20px;\n"
"        font-size: 14px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"        background-color: #1e4a5f;\n"
"        color: white;\n"
"}\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"        background-color: #0f3a4f;\n"
"        color: white;\n"
"}"));
        titleLabel = new QLabel(Playerhistory);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(50, 30, 541, 60));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(36);
        font2.setBold(true);
        titleLabel->setFont(font2);
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c5f7a;\n"
"    background-color: transparent;\n"
"}"));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        name = new QLabel(Playerhistory);
        name->setObjectName("name");
        name->setGeometry(QRect(50, 100, 541, 30));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(18);
        font3.setBold(false);
        name->setFont(font3);
        name->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333;\n"
"    background-color: transparent;\n"
"}"));
        name->setAlignment(Qt::AlignmentFlag::AlignCenter);
        gamesPlayedLabel = new QLabel(Playerhistory);
        gamesPlayedLabel->setObjectName("gamesPlayedLabel");
        gamesPlayedLabel->setGeometry(QRect(170, 150, 150, 25));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(14);
        font4.setBold(false);
        gamesPlayedLabel->setFont(font4);
        gamesPlayedLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333;\n"
"    background-color: transparent;\n"
"}"));
        gamesPlayedLabel->setAlignment(Qt::AlignmentFlag::AlignLeading);
        gameplayedd = new QLabel(Playerhistory);
        gameplayedd->setObjectName("gameplayedd");
        gameplayedd->setGeometry(QRect(350, 150, 50, 25));
        gameplayedd->setFont(font4);
        gameplayedd->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333;\n"
"    background-color: transparent;\n"
"}"));
        gameplayedd->setAlignment(Qt::AlignmentFlag::AlignLeading);
        gamesWonLabel = new QLabel(Playerhistory);
        gamesWonLabel->setObjectName("gamesWonLabel");
        gamesWonLabel->setGeometry(QRect(100, 190, 141, 25));
        gamesWonLabel->setFont(font4);
        gamesWonLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333;\n"
"    background-color: transparent;\n"
"}"));
        gamesWonLabel->setAlignment(Qt::AlignmentFlag::AlignLeading);
        winsLabel = new QLabel(Playerhistory);
        winsLabel->setObjectName("winsLabel");
        winsLabel->setGeometry(QRect(250, 190, 30, 25));
        winsLabel->setFont(font4);
        winsLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333;\n"
"    background-color: transparent;\n"
"}"));
        winsLabel->setAlignment(Qt::AlignmentFlag::AlignLeading);
        gamesLoseLabel = new QLabel(Playerhistory);
        gamesLoseLabel->setObjectName("gamesLoseLabel");
        gamesLoseLabel->setGeometry(QRect(320, 190, 151, 25));
        gamesLoseLabel->setFont(font4);
        gamesLoseLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333;\n"
"    background-color: transparent;\n"
"}"));
        gamesLoseLabel->setAlignment(Qt::AlignmentFlag::AlignLeading);
        lossesLabel = new QLabel(Playerhistory);
        lossesLabel->setObjectName("lossesLabel");
        lossesLabel->setGeometry(QRect(470, 190, 30, 31));
        lossesLabel->setFont(font4);
        lossesLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333;\n"
"    background-color: transparent;\n"
"}"));
        lossesLabel->setAlignment(Qt::AlignmentFlag::AlignLeading);
        gamesDrawnLabel = new QLabel(Playerhistory);
        gamesDrawnLabel->setObjectName("gamesDrawnLabel");
        gamesDrawnLabel->setGeometry(QRect(180, 230, 171, 25));
        gamesDrawnLabel->setFont(font4);
        gamesDrawnLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333;\n"
"    background-color: transparent;\n"
"}"));
        gamesDrawnLabel->setAlignment(Qt::AlignmentFlag::AlignLeading);
        drawsLabel = new QLabel(Playerhistory);
        drawsLabel->setObjectName("drawsLabel");
        drawsLabel->setGeometry(QRect(350, 230, 30, 25));
        drawsLabel->setFont(font4);
        drawsLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333;\n"
"    background-color: transparent;\n"
"}"));
        drawsLabel->setAlignment(Qt::AlignmentFlag::AlignLeading);

        retranslateUi(Playerhistory);

        QMetaObject::connectSlotsByName(Playerhistory);
    } // setupUi

    void retranslateUi(QDialog *Playerhistory)
    {
        Playerhistory->setWindowTitle(QCoreApplication::translate("Playerhistory", "Dialog", nullptr));
        return_2->setText(QCoreApplication::translate("Playerhistory", "Return", nullptr));
        titleLabel->setText(QCoreApplication::translate("Playerhistory", "TIC TAC TOE", nullptr));
        name->setText(QString());
        gamesPlayedLabel->setText(QCoreApplication::translate("Playerhistory", "Games Played", nullptr));
        gameplayedd->setText(QCoreApplication::translate("Playerhistory", "0", nullptr));
        gamesWonLabel->setText(QCoreApplication::translate("Playerhistory", "Games Won", nullptr));
        winsLabel->setText(QCoreApplication::translate("Playerhistory", "0", nullptr));
        gamesLoseLabel->setText(QCoreApplication::translate("Playerhistory", "Games Lose", nullptr));
        lossesLabel->setText(QCoreApplication::translate("Playerhistory", "0", nullptr));
        gamesDrawnLabel->setText(QCoreApplication::translate("Playerhistory", "Games Drawn", nullptr));
        drawsLabel->setText(QCoreApplication::translate("Playerhistory", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Playerhistory: public Ui_Playerhistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERHISTORY_H
