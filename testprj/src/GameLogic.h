#ifndef GAME_LOGIC_H
#define GAME_LOGIC_H

#include "Board.h"
#include <string>
#include <vector>

class GameLogic {
public:
    GameLogic();

    void reset();
    bool makeMove(size_t row, size_t col);
    BoardMarks currentPlayer() const;
    BoardState getGameState() const;
    void switchTurn();
    std::string getFinalStateText() const;
    int getPlayerXWins() const;
    int getPlayerOWins() const;

private:
    Board board_;
    BoardMarks current_;
    BoardState gameState_;
    int counterX = 0;
    int counterO = 0;

    void updateGameState();
};

#endif // GAME_LOGIC_H
