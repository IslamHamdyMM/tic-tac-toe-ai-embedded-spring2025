#ifndef PLAYER_HISTORY_H
#define PLAYER_HISTORY_H

#include <string>
#include <map>
#include <vector>
#include <utility>

class PlayerHistory {
public:
    explicit PlayerHistory(const std::string& dataFile = "game_history.txt");

    bool recordGame(const std::string& username, const std::string& result, const std::string& boardState);
    std::map<std::string, int> getUserStatistics(const std::string& username);
    std::vector<std::pair<int, std::string>> getUserGames(const std::string& username);
    std::string getLastBoardPosition(int gameId);

private:
    std::string filePath;
};

#endif // PLAYER_HISTORY_H
