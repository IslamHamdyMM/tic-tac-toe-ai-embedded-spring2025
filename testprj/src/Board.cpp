#include "Board.h"

Board::Board() : boardSize_(3), board_(3, std::vector<BoardMarks>(3, BoardMarks::Empty)) {}

Board::Board(size_t size)
    : board_(size, std::vector<BoardMarks>(size, BoardMarks::Empty)), boardSize_(size) {}

Board::Board(const Board& b) : board_(b.board_), boardSize_(b.boardSize_) {}

Board::Board(Board&& b) : board_(std::move(b.board_)), boardSize_(std::move(b.boardSize_)) {}

Board& Board::operator=(Board b) {
    std::swap(board_, b.board_);
    std::swap(boardSize_, b.boardSize_);
    return *this;
}

Board::~Board() {}

bool Board::setPlayerInput(size_t row, size_t col, BoardMarks currentPlayer) {
    if (evaluateBoard() != BoardState::NoWinner)
        return false;

    if (row >= boardSize_ || col >= boardSize_)
        throw std::out_of_range("Row or Column out of range.");

    if (board_[row][col] != BoardMarks::Empty)
        return false;

    board_[row][col] = currentPlayer;
    return true;
}

void Board::resetCell(size_t row, size_t col) {
    if (row >= boardSize_ || col >= boardSize_)
        throw std::out_of_range("Row or Column out of range.");
    board_[row][col] = BoardMarks::Empty;
}

BoardMarks Board::at(size_t row, size_t col) const {
    return board_.at(row).at(col);
}

void Board::reset() {
    for (auto& row : board_)
        for (auto& cell : row)
            cell = BoardMarks::Empty;
}

size_t Board::size() const {
    return boardSize_;
}

BoardState Board::evaluateBoard() {
    // Check rows
    for (size_t row = 0; row < boardSize_; ++row) {
        BoardMarks ref = board_[row][0];
        if (ref == BoardMarks::Empty) continue;
        bool allEqual = true;
        for (size_t col = 1; col < boardSize_; ++col)
            if (board_[row][col] != ref) allEqual = false;
        if (allEqual) {
            recordLastBoardPosition();
            return (ref == BoardMarks::X) ? BoardState::XWins : BoardState::OWins;
        }
    }

    // Check columns
    for (size_t col = 0; col < boardSize_; ++col) {
        BoardMarks ref = board_[0][col];
        if (ref == BoardMarks::Empty) continue;
        bool allEqual = true;
        for (size_t row = 1; row < boardSize_; ++row)
            if (board_[row][col] != ref) allEqual = false;
        if (allEqual) {
            recordLastBoardPosition();
            return (ref == BoardMarks::X) ? BoardState::XWins : BoardState::OWins;
        }
    }

    // Main diagonal
    BoardMarks ref = board_[0][0];
    if (ref != BoardMarks::Empty) {
        bool allEqual = true;
        for (size_t i = 1; i < boardSize_; ++i)
            if (board_[i][i] != ref) allEqual = false;
        if (allEqual) {
            recordLastBoardPosition();
            return (ref == BoardMarks::X) ? BoardState::XWins : BoardState::OWins;
        }
    }

    // Anti-diagonal
    ref = board_[0][boardSize_ - 1];
    if (ref != BoardMarks::Empty) {
        bool allEqual = true;
        for (size_t i = 1; i < boardSize_; ++i)
            if (board_[i][boardSize_ - i - 1] != ref) allEqual = false;
        if (allEqual) {
            recordLastBoardPosition();
            return (ref == BoardMarks::X) ? BoardState::XWins : BoardState::OWins;
        }
    }

    // Check for tie or ongoing
    for (const auto& row : board_)
        for (const auto& cell : row)
            if (cell == BoardMarks::Empty)
                return BoardState::NoWinner;

    recordLastBoardPosition();
    return BoardState::Tie;
}

void Board::recordLastBoardPosition() {
    last_position.clear();
    for (const auto& row : board_) {
        for (const auto& cell : row) {
            switch (cell) {
                case BoardMarks::X: last_position += 'X'; break;
                case BoardMarks::O: last_position += 'O'; break;
                case BoardMarks::Empty: last_position += 'N'; break;
            }
        }
    }
}

std::string Board::getLastBoardPosition() {
    return last_position;
}
