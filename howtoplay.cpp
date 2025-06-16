
#include "howtoplay.h"
#include "ui_howtoplay.h"

howtoplay::howtoplay(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::howtoplay)
{
    ui->setupUi(this);

    setWindowIcon(QIcon(":/images/images/icon1.png"));
    setWindowTitle("How to play Tic-Tac-Toe");

    // Make the dialog non-resizable to maintain the design
    setFixedSize(800, 600);
}

howtoplay::~howtoplay()
{
    delete ui;
}

void howtoplay::on_howtoplay_accepted()
{
    // Custom behavior when the dialog is accepted
}

void howtoplay::on_howtoplay_destroyed()
{
    // Handle any cleanup needed when the dialog is destroyed
}
