#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <string>
#include <stdexcept>

enum class BoardMarks { Empty, X, O };
enum class BoardState { NoWinner, XWins, OWins, Tie };

class Board {
protected:
    std::vector<std::vector<BoardMarks>> board_;
    size_t boardSize_;

public:
    Board();
    Board(size_t size);
    Board(const Board& b);
    Board(Board&& b);
    Board& operator=(Board b);
    ~Board();

    BoardState evaluateBoard();
    bool setPlayerInput(size_t row, size_t col, BoardMarks currentPlayer);
    BoardMarks at(size_t row, size_t col) const;
    void reset();
    void resetCell(size_t row, size_t col);
    size_t size() const;

    std::string getLastBoardPosition();

private:
    std::string last_position;
    void recordLastBoardPosition();
};

#endif // BOARD_H
