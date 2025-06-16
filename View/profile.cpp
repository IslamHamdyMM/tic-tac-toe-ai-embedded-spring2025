#include "profile.h"
#include "ui_profile.h"
#include <QSoundEffect>  // Include QSound
#include <QPalette>
#include <QPixmap>
#include <QPainter>
#include <QLabel>
extern QString username;
Profile::Profile(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Profile)


{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/images/images/icon1.png"));
    setWindowTitle("Tic Tac Toe");  // Set the custom title text
    clickSound.setSource(QUrl::fromLocalFile(":/images/images/click_sound.wav"));
    clickSound.setVolume(0.1f);  // Set volume to 25%

    // Set a clean background instead of the image
    setStyleSheet("QDialog { background-color: #f5f5f5; }");
}

Profile::~Profile()
{
    delete ui;
}

void Profile::resizeEvent(QResizeEvent *event)
{
    QDialog::resizeEvent(event);
    // Remove the background image setting since we're using a solid color now
}

void Profile::setMainPageBackground()
{
    // Remove the background image and use a solid color instead
    // This function can be kept for compatibility but doesn't need to do anything
    setStyleSheet("QDialog { background-color: #f5f5f5; }");
}

void Profile::on_start_clicked()
{
    clickSound.play();  // Play the sound effect

    this->hide();
    TitleScreen *titlescreen= new TitleScreen();
    titlescreen->show();
}

void Profile::on_logOut_clicked()
{
    clickSound.play();  // Play the sound effect

    this->hide();
    MainPage *mainpage= new MainPage();
    mainpage->show();
}

void Profile::on_profile_clicked()
{
    clickSound.play();  // Play the sound effect

    this->hide();
    Playerhistory *playerhistory= new Playerhistory();
    playerhistory->show();
    playerhistory->getUserStatistics(username);
    playerhistory->getUserGames(username);
    playerhistory->loadUserStatistics(username);
    playerhistory->loadUserGames(username);
}

void Profile::on_how_clicked()
{
    clickSound.play();  // Play the sound effect
    howtoplay *howtoplayy= new howtoplay();
    howtoplayy->show();
}

void Profile::on_groupBox_clicked()
{
    clickSound.play();  // Play the sound effect
    // This function can be removed since we're no longer using a group box
}
