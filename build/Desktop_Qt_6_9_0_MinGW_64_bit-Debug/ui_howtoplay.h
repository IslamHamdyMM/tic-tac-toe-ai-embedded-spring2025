/********************************************************************************
** Form generated from reading UI file 'howtoplay.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOWTOPLAY_H
#define UI_HOWTOPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_howtoplay
{
public:
    QLabel *titleLabel;
    QLabel *introLabel;
    QLabel *strategyLabel;
    QLabel *rulesLabel;
    QLabel *winLabel;

    void setupUi(QDialog *howtoplay)
    {
        if (howtoplay->objectName().isEmpty())
            howtoplay->setObjectName("howtoplay");
        howtoplay->setEnabled(true);
        howtoplay->resize(800, 600);
        howtoplay->setMinimumSize(QSize(800, 600));
        howtoplay->setMaximumSize(QSize(800, 600));
        howtoplay->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-color: white;\n"
"    color: black;\n"
"    font-family: Arial, sans-serif;\n"
"}"));
        titleLabel = new QLabel(howtoplay);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(20, 20, 760, 80));
        titleLabel->setAlignment(Qt::AlignCenter);
        introLabel = new QLabel(howtoplay);
        introLabel->setObjectName("introLabel");
        introLabel->setGeometry(QRect(20, 110, 760, 60));
        introLabel->setAlignment(Qt::AlignCenter);
        introLabel->setWordWrap(true);
        strategyLabel = new QLabel(howtoplay);
        strategyLabel->setObjectName("strategyLabel");
        strategyLabel->setGeometry(QRect(20, 180, 760, 60));
        strategyLabel->setWordWrap(true);
        rulesLabel = new QLabel(howtoplay);
        rulesLabel->setObjectName("rulesLabel");
        rulesLabel->setGeometry(QRect(20, 250, 760, 200));
        rulesLabel->setWordWrap(true);
        rulesLabel->setAlignment(Qt::AlignTop);
        winLabel = new QLabel(howtoplay);
        winLabel->setObjectName("winLabel");
        winLabel->setGeometry(QRect(20, 460, 760, 120));
        winLabel->setWordWrap(true);
        winLabel->setAlignment(Qt::AlignTop);

        retranslateUi(howtoplay);

        QMetaObject::connectSlotsByName(howtoplay);
    } // setupUi

    void retranslateUi(QDialog *howtoplay)
    {
        howtoplay->setWindowTitle(QCoreApplication::translate("howtoplay", "How to play Tic-Tac-Toe", nullptr));
        titleLabel->setText(QCoreApplication::translate("howtoplay", "<html><head/><body><h1 style=\"text-align: center; color: black; font-size: 24px; font-weight: bold; margin: 0;\">TIC TAC TOE</h1></body></html>", nullptr));
        introLabel->setText(QCoreApplication::translate("howtoplay", "<html><head/><body><p style=\"color: black; font-size: 12px; font-style: italic; text-align: center; margin: 3px;\">You probably already know how to play Tic-Tac-Toe. It's a really simple game, right? That's what most people think.</p><p style=\"color: black; font-size: 12px; font-style: italic; text-align: center; margin: 3px;\">But if you really wrap your brain around it, you'll discover that Tic-Tac-Toe isn't quite as simple as you think!</p></body></html>", nullptr));
        strategyLabel->setText(QCoreApplication::translate("howtoplay", "<html><head/><body><p style=\"color: black; font-size: 12px; font-style: italic; margin: 3px;\">TicTacToe (along with other games) involves looking ahead, trying to figure out what the person playing against you might do next.</p></body></html>", nullptr));
        rulesLabel->setText(QCoreApplication::translate("howtoplay", "<html><head/><body><h2 style=\"color: black; font-size: 16px; margin: 0 0 8px 0;\">Rules for Tic Tac Toe</h2><p style=\"color: black; font-size: 11px; margin: 2px 0;\">1) The game is played on a grid that's 3 squares by 3 squares.</p><p style=\"color: black; font-size: 11px; margin: 2px 0;\">2) You are X, your friend (or the computer in this case) is O.</p><p style=\"color: black; font-size: 11px; margin: 2px 0;\">Players take turns putting their marks in empty squares.</p><p style=\"color: black; font-size: 11px; margin: 2px 0;\">3) The first player to get 3 of their marks in a row (up, down, across, or diagonally) is the winner.</p><p style=\"color: black; font-size: 11px; margin: 2px 0;\">4) When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie.</p></body></html>", nullptr));
        winLabel->setText(QCoreApplication::translate("howtoplay", "<html><head/><body><h2 style=\"color: black; font-size: 16px; margin: 0 0 8px 0;\">How can I win at Tic-Tac-Toe?</h2><p style=\"color: black; font-size: 11px; margin: 2px 0;\">To beat the computer (or at least tie), you need to make use of a little bit of strategy. Strategy means figuring out what you need to do to win.</p><p style=\"color: black; font-size: 11px; margin: 2px 0;\">Part of your strategy is trying to figure out how to get three X's in a row. The other part is trying to figure out how to stop the computer from getting three O's in a row.</p><p style=\"color: black; font-size: 11px; margin: 2px 0;\">If you always pay attention and look ahead, you'll never lose a game of Tic-Tac-Toe. You may not win, but at least you'll tie.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class howtoplay: public Ui_howtoplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOWTOPLAY_H
