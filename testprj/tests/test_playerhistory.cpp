#include <gtest/gtest.h>
#include "PlayerHistory.h"
#include <fstream>

class PlayerHistoryTest : public ::testing::Test {
protected:
    std::string testFile = "test_history.txt";
    PlayerHistory* history;
    std::string testUser = "tester";

    void SetUp() override {
        // Remove previous test data
        std::ofstream clear(testFile, std::ios::trunc);
        clear.close();
        history = new PlayerHistory(testFile);
    }

    void TearDown() override {
        delete history;
        std::remove(testFile.c_str());
    }
};

TEST_F(PlayerHistoryTest, RecordGameAppendsCorrectly) {
    bool success = history->recordGame(testUser, "win", "XOXOXOXOX");
    EXPECT_TRUE(success);

    std::ifstream in(testFile);
    std::string line;
    std::getline(in, line);
    EXPECT_EQ(line, "tester,win,XOXOXOXOX");
}

TEST_F(PlayerHistoryTest, GetUserStatisticsReturnsCorrectValues) {
    history->recordGame(testUser, "win", "1");
    history->recordGame(testUser, "loss", "2");
    history->recordGame(testUser, "tie", "3");

    auto stats = history->getUserStatistics(testUser);
    EXPECT_EQ(stats["wins"], 1);
    EXPECT_EQ(stats["losses"], 1);
    EXPECT_EQ(stats["draws"], 1);
}

TEST_F(PlayerHistoryTest, GetUserGamesReturnsCorrectData) {
    history->recordGame(testUser, "win", "aaa");
    history->recordGame(testUser, "loss", "bbb");

    auto games = history->getUserGames(testUser);
    ASSERT_EQ(games.size(), 2);
    EXPECT_EQ(games[0].second, "win");
    EXPECT_EQ(games[1].second, "loss");
}

TEST_F(PlayerHistoryTest, GetLastBoardPositionReturnsCorrectLine) {
    history->recordGame(testUser, "win", "POS1");
    history->recordGame(testUser, "tie", "POS2");

    auto games = history->getUserGames(testUser);
    int lastId = games[1].first;

    std::string pos = history->getLastBoardPosition(lastId);
    EXPECT_EQ(pos, "POS2");
}





