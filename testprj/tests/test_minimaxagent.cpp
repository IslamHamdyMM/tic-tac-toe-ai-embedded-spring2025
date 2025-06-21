#include <gtest/gtest.h>
#include "MiniMaxAgent.h"
#include "Board.h"

TEST(MiniMaxAgentTest, PicksImmediateWinningMove) {
    Board board(3);
    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::X);
    // board[0][2] is empty — AI is X and should win here

    MiniMaxAgent ai(4, BoardMarks::X, BoardMarks::O);
    int moveIndex = ai.play(board);

    EXPECT_EQ(moveIndex, 2); // row 0, col 2 → index = 0*3 + 2
    EXPECT_EQ(board.evaluateBoard(), BoardState::XWins);
}


TEST(MiniMaxAgentTest, ReturnsInvalidOnFinishedBoard) {
    Board board(3);
    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::X); // X wins

    MiniMaxAgent ai(4, BoardMarks::O, BoardMarks::X);
    int move = ai.play(board);

    EXPECT_EQ(move, -1); // Should not play
}

TEST(MiniMaxAgentTest, PicksBestMoveEarlyInGame) {
    Board board(3); // empty board
    MiniMaxAgent ai(6, BoardMarks::X, BoardMarks::O);
    int move = ai.play(board);

    EXPECT_GE(move, 0);
    EXPECT_LT(move, 9); // Valid index range
    EXPECT_EQ(board.evaluateBoard(), BoardState::NoWinner);
}
