#include <gtest/gtest.h>
#include "GameLogic.h"

TEST(GameLogicTest, InitialPlayerIsX) {
    GameLogic game;
    EXPECT_EQ(game.currentPlayer(), BoardMarks::X);
}

TEST(GameLogicTest, ValidMoveSwitchesTurn) {
    GameLogic game;
    EXPECT_TRUE(game.makeMove(0, 0));
    EXPECT_EQ(game.currentPlayer(), BoardMarks::O);
}

TEST(GameLogicTest, MoveAfterWinIsRejected) {
    GameLogic game;
    game.makeMove(0, 0); // X
    game.makeMove(1, 0); // O
    game.makeMove(0, 1); // X
    game.makeMove(1, 1); // O
    game.makeMove(0, 2); // X wins
    EXPECT_EQ(game.getGameState(), BoardState::XWins);
    EXPECT_FALSE(game.makeMove(2, 2)); // Game is over
}

TEST(GameLogicTest, WinCountersUpdateCorrectly) {
    GameLogic game;
    game.makeMove(0, 0); // X
    game.makeMove(1, 0); // O
    game.makeMove(0, 1); // X
    game.makeMove(1, 1); // O
    game.makeMove(0, 2); // X wins

    EXPECT_EQ(game.getPlayerXWins(), 1);
    EXPECT_EQ(game.getPlayerOWins(), 0);
}

TEST(GameLogicTest, TieIsDetectedCorrectly) {
    GameLogic game;
    game.makeMove(0, 0); // X
    game.makeMove(0, 1); // O
    game.makeMove(0, 2); // X
    game.makeMove(1, 1); // O
    game.makeMove(1, 0); // X
    game.makeMove(1, 2); // O
    game.makeMove(2, 1); // X
    game.makeMove(2, 0); // O
    game.makeMove(2, 2); // X
    EXPECT_EQ(game.getGameState(), BoardState::Tie);
}

TEST(GameLogicTest, FinalStateTextCorrectness) {
    GameLogic game;
    game.makeMove(0, 0); // X
    game.makeMove(1, 0); // O
    game.makeMove(0, 1); // X
    game.makeMove(1, 1); // O
    game.makeMove(0, 2); // X wins
    EXPECT_EQ(game.getFinalStateText(), "Player X wins!");
}
