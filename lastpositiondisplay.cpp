#include "lastpositiondisplay.h"
#include "ui_lastpositiondisplay.h"

lastpositiondisplay::lastpositiondisplay(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::lastpositiondisplay)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/images/images/icon1.png"));
    setWindowTitle("Tic Tac Toe");  // Keep original title
}

lastpositiondisplay::~lastpositiondisplay()
{
    delete ui;
}

void lastpositiondisplay::updateBoard(QString &lastPosition) {
    if (lastPosition.length() != 9) {
        qDebug() << "Invalid board string length";
        return;
    }

    for (int i = 0; i < 9; ++i) {
        QString buttonName = QString("button_%1_%2").arg(i / 3).arg(i % 3);
        QPushButton *button = findChild<QPushButton *>(buttonName);
        if (button) {
            QChar mark = lastPosition[i];
            if (mark == 'X' || mark == 'O') {
                button->setText(mark);

                // Apply color styling - the UI file handles the base styling
                if (mark == 'X') {
                    button->setStyleSheet(button->styleSheet() + "color: #008000;"); // Green for X
                } else if (mark == 'O') {
                    button->setStyleSheet(button->styleSheet() + "color: #000000;"); // Black for O
                }
            } else {
                button->setText("");
                // Reset to default styling from UI file
                button->setStyleSheet("");
            }
        }
    }
}
