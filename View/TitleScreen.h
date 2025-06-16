#ifndef TITLESCREEN_H
#define TITLESCREEN_H
#include "TTTCommonTypes.h"
#include "ui_titlescreen.h"
#include"profile.h"
#include <QMainWindow>
#include <memory>
#include <QSoundEffect>

class TitleScreen final : public QMainWindow
{
    Q_OBJECT

public:
    explicit TitleScreen(QWidget *parent = nullptr);

private:
    QSoundEffect clickSound;
    std::unique_ptr<Ui::TitleScreen> ui;
    void setConnections();
    void drawTicTacToeBoard();
    TTTOptions options_;
    void closeEvent(QCloseEvent *event) override;

public slots:
    void updateBoardSize(int size);
    void updateSinglePlayer(bool checked);
    void updateTwoPlayers(bool checked);
    void updateAIstartsGame(bool checked);
    void updateMiniMaxDepth(int depth);
    void startGame();
    void newButton();

signals:
    void exited();
};

#endif // TITLESCREEN_H
