#include <gtest/gtest.h>
#include "Board.h"

TEST(BoardTest, DefaultConstructorCreatesEmptyBoard) {
    Board board(3);
    for (size_t i = 0; i < board.size(); ++i)
        for (size_t j = 0; j < board.size(); ++j)
            EXPECT_EQ(board.at(i, j), BoardMarks::Empty);
}

TEST(BoardTest, SetPlayerInputValid) {
    Board board(3);
    EXPECT_TRUE(board.setPlayerInput(1, 1, BoardMarks::X));
    EXPECT_EQ(board.at(1, 1), BoardMarks::X);
}

TEST(BoardTest, SetPlayerInputTwiceFails) {
    Board board(3);
    EXPECT_TRUE(board.setPlayerInput(0, 0, BoardMarks::O));
    EXPECT_FALSE(board.setPlayerInput(0, 0, BoardMarks::X)); // already filled
}

TEST(BoardTest, ResetCellClearsValue) {
    Board board(3);
    board.setPlayerInput(2, 2, BoardMarks::X);
    board.resetCell(2, 2);
    EXPECT_EQ(board.at(2, 2), BoardMarks::Empty);
}

TEST(BoardTest, ResetBoardEmptiesAllCells) {
    Board board(3);
    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(1, 1, BoardMarks::O);
    board.reset();
    for (size_t i = 0; i < board.size(); ++i)
        for (size_t j = 0; j < board.size(); ++j)
            EXPECT_EQ(board.at(i, j), BoardMarks::Empty);
}

TEST(BoardTest, XWinsRow) {
    Board board(3);
    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::X);
    EXPECT_EQ(board.evaluateBoard(), BoardState::XWins);
}

TEST(BoardTest, OWinsColumn) {
    Board board(3);
    board.setPlayerInput(0, 0, BoardMarks::O);
    board.setPlayerInput(1, 0, BoardMarks::O);
    board.setPlayerInput(2, 0, BoardMarks::O);
    EXPECT_EQ(board.evaluateBoard(), BoardState::OWins);
}

TEST(BoardTest, TieGame) {
    Board board(3);
    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::O);
    board.setPlayerInput(0, 2, BoardMarks::X);
    board.setPlayerInput(1, 0, BoardMarks::X);
    board.setPlayerInput(1, 1, BoardMarks::O);
    board.setPlayerInput(1, 2, BoardMarks::O);
    board.setPlayerInput(2, 0, BoardMarks::O);
    board.setPlayerInput(2, 1, BoardMarks::X);
    board.setPlayerInput(2, 2, BoardMarks::X);
    EXPECT_EQ(board.evaluateBoard(), BoardState::Tie);
}

TEST(BoardTest, InvalidInputOutOfBoundsThrows) {
    Board board(3);
    EXPECT_THROW(board.setPlayerInput(3, 0, BoardMarks::X), std::out_of_range);
    EXPECT_THROW(board.setPlayerInput(0, 3, BoardMarks::X), std::out_of_range);
    EXPECT_THROW(board.at(5, 1), std::out_of_range);
}
TEST(BoardTest, GetLastBoardPositionAfterWin) {
    Board board(3);
    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::X);
    board.evaluateBoard();
    std::string lastPos = board.getLastBoardPosition();
    EXPECT_EQ(lastPos.size(), 9); // 3x3 board = 9 characters
    EXPECT_EQ(lastPos.substr(0, 3), "XXX"); // first row should be all Xs
}
