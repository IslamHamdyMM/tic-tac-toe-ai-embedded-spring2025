#include "TitleScreen.h"
#include "TTTController.h"
#include "starthistory.h"
#include"Global_variables.h"
#include <QPainter>
#include <QPen>
#include <QPalette>
bool Ai_checked;

TitleScreen::TitleScreen(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::TitleScreen)
{
    ui->setupUi(this);

    // Force white background regardless of system theme
    setStyleSheet("QMainWindow { background-color: white; }");

    // Set white background for central widget and all child widgets
    QPalette palette = this->palette();
    palette.setColor(QPalette::Window, Qt::white);
    palette.setColor(QPalette::WindowText, QColor("#2c3e50"));
    palette.setColor(QPalette::Base, Qt::white);
    palette.setColor(QPalette::Text, QColor("#2c3e50"));
    this->setPalette(palette);

    // Apply white background to central widget
    ui->centralwidget->setStyleSheet("QWidget { background-color: white; color: #2c3e50; }");

    setConnections();
    setWindowIcon(QIcon(":/images/images/icon1.png"));
    clickSound.setSource(QUrl::fromLocalFile(":/images/images/click_sound.wav"));
    clickSound.setVolume(0.1f);

    drawTicTacToeBoard();
}

void TitleScreen::drawTicTacToeBoard()
{
    QPixmap pixmap(230, 230);
    pixmap.fill(Qt::white);

    QPainter painter(&pixmap);
    painter.setRenderHint(QPainter::Antialiasing);

    // Draw grid lines with better positioning
    QPen gridPen(QColor("#2c3e50"), 6, Qt::SolidLine, Qt::RoundCap);
    painter.setPen(gridPen);

    // Vertical lines
    painter.drawLine(76, 20, 76, 210);
    painter.drawLine(154, 20, 154, 210);

    // Horizontal lines
    painter.drawLine(20, 76, 210, 76);
    painter.drawLine(20, 154, 210, 154);

    // Draw X's with better positioning and size
    QPen xPen(QColor("#3498db"), 5, Qt::SolidLine, Qt::RoundCap);
    painter.setPen(xPen);

    // Top-left X
    painter.drawLine(30, 30, 66, 66);
    painter.drawLine(66, 30, 30, 66);

    // Top-right X
    painter.drawLine(164, 30, 200, 66);
    painter.drawLine(200, 30, 164, 66);

    // Bottom-left X
    painter.drawLine(30, 164, 66, 200);
    painter.drawLine(66, 164, 30, 200);

    // Bottom-right X
    painter.drawLine(164, 164, 200, 200);
    painter.drawLine(200, 164, 164, 200);

    // Draw O's with better positioning and size
    QPen oPen(QColor("#e74c3c"), 5, Qt::SolidLine, Qt::RoundCap);
    painter.setPen(oPen);
    painter.setBrush(Qt::NoBrush);

    // Center O
    painter.drawEllipse(96, 96, 38, 38);

    // Top-center O
    painter.drawEllipse(96, 38, 38, 38);

    // Middle-right O (corrected position)
    painter.drawEllipse(172, 96, 38, 38);

    // Bottom-center O
    painter.drawEllipse(96, 172, 38, 38);

    ui->gameIcon->setPixmap(pixmap);
}

void TitleScreen::setConnections()
{
    connect(ui->boardSize, SIGNAL(valueChanged(int)), SLOT(updateBoardSize(int)));
    connect(ui->onePlayer, SIGNAL(toggled(bool)), SLOT(updateSinglePlayer(bool)));
    connect(ui->twoPlayers, SIGNAL(toggled(bool)), SLOT(updateTwoPlayers(bool)));
    connect(ui->AIStarts, SIGNAL(toggled(bool)), SLOT(updateAIstartsGame(bool)));
    connect(ui->miniMaxDepth, SIGNAL(valueChanged(int)), SLOT(updateMiniMaxDepth(int)));
    connect(ui->startGame, SIGNAL(clicked()), SLOT(startGame()));
}

void TitleScreen::updateBoardSize(int size)
{
    ui->boardSizeValue->setText(QString::number(size));
    options_.boardSize = static_cast<size_t>(size);
}

void TitleScreen::updateSinglePlayer(bool checked)
{
    Ai_checked=checked;
    if (checked) {
        ui->AIStarts->setEnabled(true);
        ui->miniMaxDepth->setEnabled(true);
        ui->aiStartsLabel->setEnabled(true);
        ui->difficultyLabel->setEnabled(true);
        options_.AIopponent = true;
    }
}

void TitleScreen::updateTwoPlayers(bool checked)
{
    if (checked) {
        ui->AIStarts->setEnabled(false);
        ui->miniMaxDepth->setEnabled(false);
        ui->aiStartsLabel->setEnabled(false);
        ui->difficultyLabel->setEnabled(false);
        options_.AIopponent = false;
    }
}

void TitleScreen::updateAIstartsGame(bool checked)
{
    if (checked)
    {options_.AIstarts = true;
        Ai_checked=true;
    }
    else
    {options_.AIstarts = false; Ai_checked=false;
    }
}

void TitleScreen::updateMiniMaxDepth(int depth)
{
    qDebug()<< depth;
    ui->miniMaxDepthValue->setText(QString::number(depth));
    options_.miniMaxDepth = static_cast<unsigned short>(depth);
}

void TitleScreen::startGame()
{clickSound.play();
    this->hide();
    TTTController ttt(options_);
    ttt.startGame();
    this->show();
}

void TitleScreen::newButton()
{clickSound.play();
    this->hide();
    Profile *profile= new Profile();
    profile->show();
}

void TitleScreen::closeEvent(QCloseEvent *event)
{
    QMainWindow::closeEvent(event);
    emit exited();
}
