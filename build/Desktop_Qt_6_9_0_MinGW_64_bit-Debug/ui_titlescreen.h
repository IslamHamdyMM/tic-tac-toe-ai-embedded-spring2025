/********************************************************************************
** Form generated from reading UI file 'titlescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLESCREEN_H
#define UI_TITLESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TitleScreen
{
public:
    QWidget *centralwidget;
    QVBoxLayout *mainLayout;
    QLabel *gameIcon;
    QLabel *titleLabel;
    QFormLayout *optionsLayout;
    QLabel *boardSizeLabel;
    QHBoxLayout *boardSizeLayout;
    QSlider *boardSize;
    QLabel *boardSizeValue;
    QLabel *playersLabel;
    QVBoxLayout *playersLayout;
    QRadioButton *onePlayer;
    QRadioButton *twoPlayers;
    QLabel *aiStartsLabel;
    QCheckBox *AIStarts;
    QLabel *difficultyLabel;
    QHBoxLayout *difficultyLayout;
    QSlider *miniMaxDepth;
    QLabel *miniMaxDepthValue;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *buttonLayout;
    QSpacerItem *leftSpacer;
    QPushButton *startGame;
    QSpacerItem *rightSpacer;

    void setupUi(QMainWindow *TitleScreen)
    {
        if (TitleScreen->objectName().isEmpty())
            TitleScreen->setObjectName("TitleScreen");
        TitleScreen->resize(628, 792);
        TitleScreen->setMinimumSize(QSize(628, 792));
        TitleScreen->setMaximumSize(QSize(628, 792));
        TitleScreen->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #f8f9fa, stop:1 #e9ecef);\n"
"}\n"
"\n"
"QWidget {\n"
"    background-color: transparent;\n"
"    color: #2c3e50;\n"
"}"));
        centralwidget = new QWidget(TitleScreen);
        centralwidget->setObjectName("centralwidget");
        mainLayout = new QVBoxLayout(centralwidget);
        mainLayout->setSpacing(25);
        mainLayout->setObjectName("mainLayout");
        mainLayout->setContentsMargins(40, 30, 40, 30);
        gameIcon = new QLabel(centralwidget);
        gameIcon->setObjectName("gameIcon");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gameIcon->sizePolicy().hasHeightForWidth());
        gameIcon->setSizePolicy(sizePolicy);
        gameIcon->setMinimumSize(QSize(250, 250));
        gameIcon->setMaximumSize(QSize(250, 250));
        gameIcon->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: white;\n"
"    border: 3px solid #34495e;\n"
"    border-radius: 15px;\n"
"    padding: 20px;\n"
"}"));
        gameIcon->setAlignment(Qt::AlignmentFlag::AlignCenter);

        mainLayout->addWidget(gameIcon);

        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setMinimumSize(QSize(548, 84));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(42);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c3e50;\n"
"    background-color: transparent;\n"
"    text-shadow: 2px 2px 4px rgba(0,0,0,0.1);\n"
"}"));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        mainLayout->addWidget(titleLabel, 0, Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTop);

        optionsLayout = new QFormLayout();
        optionsLayout->setObjectName("optionsLayout");
        optionsLayout->setHorizontalSpacing(25);
        optionsLayout->setVerticalSpacing(25);
        boardSizeLabel = new QLabel(centralwidget);
        boardSizeLabel->setObjectName("boardSizeLabel");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        font1.setBold(true);
        boardSizeLabel->setFont(font1);
        boardSizeLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c3e50;\n"
"}"));

        optionsLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, boardSizeLabel);

        boardSizeLayout = new QHBoxLayout();
        boardSizeLayout->setObjectName("boardSizeLayout");
        boardSize = new QSlider(centralwidget);
        boardSize->setObjectName("boardSize");
        boardSize->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #bdc3c7, stop:1 #95a5a6);\n"
"    height: 10px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #3498db, stop:1 #2980b9);\n"
"    border: 2px solid #2c3e50;\n"
"    width: 22px;\n"
"    height: 22px;\n"
"    border-radius: 11px;\n"
"    margin: -8px 0;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #3498db, stop:1 #2980b9);\n"
"    border-radius: 5px;\n"
"}"));
        boardSize->setMinimum(3);
        boardSize->setMaximum(10);
        boardSize->setValue(3);
        boardSize->setOrientation(Qt::Orientation::Horizontal);

        boardSizeLayout->addWidget(boardSize);

        boardSizeValue = new QLabel(centralwidget);
        boardSizeValue->setObjectName("boardSizeValue");
        boardSizeValue->setMinimumSize(QSize(35, 35));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        boardSizeValue->setFont(font2);
        boardSizeValue->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 17px;\n"
"    padding: 5px;\n"
"}"));
        boardSizeValue->setAlignment(Qt::AlignmentFlag::AlignCenter);

        boardSizeLayout->addWidget(boardSizeValue);


        optionsLayout->setLayout(0, QFormLayout::ItemRole::FieldRole, boardSizeLayout);

        playersLabel = new QLabel(centralwidget);
        playersLabel->setObjectName("playersLabel");
        playersLabel->setFont(font1);
        playersLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c3e50;\n"
"}"));

        optionsLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, playersLabel);

        playersLayout = new QVBoxLayout();
        playersLayout->setObjectName("playersLayout");
        onePlayer = new QRadioButton(centralwidget);
        onePlayer->setObjectName("onePlayer");
        QFont font3;
        onePlayer->setFont(font3);
        onePlayer->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    font-size: 12px;\n"
"    color: #2c3e50;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"    border: 3px solid #bdc3c7;\n"
"    border-radius: 9px;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    border: 3px solid #e74c3c;\n"
"    border-radius: 9px;\n"
"    background-color: #e74c3c;\n"
"}"));
        onePlayer->setChecked(true);

        playersLayout->addWidget(onePlayer);

        twoPlayers = new QRadioButton(centralwidget);
        twoPlayers->setObjectName("twoPlayers");
        twoPlayers->setFont(font3);
        twoPlayers->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    font-size: 12px;\n"
"    color: #2c3e50;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"    border: 3px solid #bdc3c7;\n"
"    border-radius: 9px;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    border: 3px solid #e74c3c;\n"
"    border-radius: 9px;\n"
"    background-color: #e74c3c;\n"
"}"));

        playersLayout->addWidget(twoPlayers);


        optionsLayout->setLayout(1, QFormLayout::ItemRole::FieldRole, playersLayout);

        aiStartsLabel = new QLabel(centralwidget);
        aiStartsLabel->setObjectName("aiStartsLabel");
        aiStartsLabel->setFont(font1);
        aiStartsLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c3e50;\n"
"}"));

        optionsLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, aiStartsLabel);

        AIStarts = new QCheckBox(centralwidget);
        AIStarts->setObjectName("AIStarts");
        AIStarts->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QCheckBox::indicator::unchecked {\n"
"    border: 3px solid #bdc3c7;\n"
"    background-color: white;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QCheckBox::indicator::checked {\n"
"    border: 3px solid #27ae60;\n"
"    background-color: #27ae60;\n"
"    border-radius: 3px;\n"
"}"));

        optionsLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, AIStarts);

        difficultyLabel = new QLabel(centralwidget);
        difficultyLabel->setObjectName("difficultyLabel");
        difficultyLabel->setFont(font1);
        difficultyLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c3e50;\n"
"}"));

        optionsLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, difficultyLabel);

        difficultyLayout = new QHBoxLayout();
        difficultyLayout->setObjectName("difficultyLayout");
        miniMaxDepth = new QSlider(centralwidget);
        miniMaxDepth->setObjectName("miniMaxDepth");
        miniMaxDepth->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #bdc3c7, stop:1 #95a5a6);\n"
"    height: 10px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #e67e22, stop:1 #d35400);\n"
"    border: 2px solid #2c3e50;\n"
"    width: 22px;\n"
"    height: 22px;\n"
"    border-radius: 11px;\n"
"    margin: -8px 0;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #e67e22, stop:1 #d35400);\n"
"    border-radius: 5px;\n"
"}"));
        miniMaxDepth->setMinimum(1);
        miniMaxDepth->setMaximum(20);
        miniMaxDepth->setValue(7);
        miniMaxDepth->setOrientation(Qt::Orientation::Horizontal);

        difficultyLayout->addWidget(miniMaxDepth);

        miniMaxDepthValue = new QLabel(centralwidget);
        miniMaxDepthValue->setObjectName("miniMaxDepthValue");
        miniMaxDepthValue->setMinimumSize(QSize(35, 35));
        miniMaxDepthValue->setFont(font2);
        miniMaxDepthValue->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #e67e22;\n"
"    color: white;\n"
"    border-radius: 17px;\n"
"    padding: 5px;\n"
"}"));
        miniMaxDepthValue->setAlignment(Qt::AlignmentFlag::AlignCenter);

        difficultyLayout->addWidget(miniMaxDepthValue);


        optionsLayout->setLayout(3, QFormLayout::ItemRole::FieldRole, difficultyLayout);


        mainLayout->addLayout(optionsLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        mainLayout->addItem(verticalSpacer);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        leftSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonLayout->addItem(leftSpacer);

        startGame = new QPushButton(centralwidget);
        startGame->setObjectName("startGame");
        startGame->setMinimumSize(QSize(250, 60));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(18);
        font4.setBold(true);
        startGame->setFont(font4);
        startGame->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #2c3e50, stop:1 #34495e);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 30px;\n"
"    padding: 15px 30px;\n"
"    text-shadow: 1px 1px 2px rgba(0,0,0,0.3);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #34495e, stop:1 #2c3e50);\n"
"    transform: translateY(-2px);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #1a252f, stop:1 #2c3e50);\n"
"    transform: translateY(1px);\n"
"}"));

        buttonLayout->addWidget(startGame);

        rightSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonLayout->addItem(rightSpacer);


        mainLayout->addLayout(buttonLayout);

        TitleScreen->setCentralWidget(centralwidget);

        retranslateUi(TitleScreen);

        QMetaObject::connectSlotsByName(TitleScreen);
    } // setupUi

    void retranslateUi(QMainWindow *TitleScreen)
    {
        TitleScreen->setWindowTitle(QCoreApplication::translate("TitleScreen", "Tic Tac Toe Session", nullptr));
        gameIcon->setText(QString());
        titleLabel->setText(QCoreApplication::translate("TitleScreen", "<html><head/><body><p><span style=\" font-size:36pt;\">TIC TAC TOE</span></p></body></html>", nullptr));
        boardSizeLabel->setText(QCoreApplication::translate("TitleScreen", "Board Size", nullptr));
        boardSizeValue->setText(QCoreApplication::translate("TitleScreen", "3", nullptr));
        playersLabel->setText(QCoreApplication::translate("TitleScreen", "Number of Players", nullptr));
        onePlayer->setText(QCoreApplication::translate("TitleScreen", "1 Player (vs AI)", nullptr));
        twoPlayers->setText(QCoreApplication::translate("TitleScreen", "2 Players", nullptr));
        aiStartsLabel->setText(QCoreApplication::translate("TitleScreen", "AI starts first", nullptr));
        AIStarts->setText(QString());
        difficultyLabel->setText(QCoreApplication::translate("TitleScreen", "Difficulty level", nullptr));
        miniMaxDepthValue->setText(QCoreApplication::translate("TitleScreen", "7", nullptr));
        startGame->setText(QCoreApplication::translate("TitleScreen", "Start Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TitleScreen: public Ui_TitleScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLESCREEN_H
