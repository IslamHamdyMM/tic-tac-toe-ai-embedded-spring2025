#include "GameLogic.h"

GameLogic::GameLogic()
    : board_(3), current_(BoardMarks::X), gameState_(BoardState::NoWinner) {}

void GameLogic::reset() {
    board_.reset();
    current_ = BoardMarks::X;
    gameState_ = BoardState::NoWinner;
}

bool GameLogic::makeMove(size_t row, size_t col) {
    if (gameState_ != BoardState::NoWinner)
        return false;

    if (board_.setPlayerInput(row, col, current_)) {
        updateGameState();
        if (gameState_ == BoardState::NoWinner) {
            switchTurn();
        }
        return true;
    }
    return false;
}

void GameLogic::updateGameState() {
    gameState_ = board_.evaluateBoard();
    if (gameState_ == BoardState::XWins) ++counterX;
    if (gameState_ == BoardState::OWins) ++counterO;
}

BoardMarks GameLogic::currentPlayer() const {
    return current_;
}

BoardState GameLogic::getGameState() const {
    return gameState_;
}

void GameLogic::switchTurn() {
    current_ = (current_ == BoardMarks::X) ? BoardMarks::O : BoardMarks::X;
}

std::string GameLogic::getFinalStateText() const {
    switch (gameState_) {
    case BoardState::XWins: return "Player X wins!";
    case BoardState::OWins: return "Player O wins!";
    case BoardState::Tie:   return "It's a tie!";
    default: return "";
    }
}

int GameLogic::getPlayerXWins() const {
    return counterX;
}

int GameLogic::getPlayerOWins() const {
    return counterO;
}
