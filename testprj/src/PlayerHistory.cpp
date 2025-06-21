#include "PlayerHistory.h"
#include <fstream>
#include <sstream>
#include <iostream>

PlayerHistory::PlayerHistory(const std::string& dataFile) : filePath(dataFile) {}

bool PlayerHistory::recordGame(const std::string& username, const std::string& result, const std::string& boardState) {
    std::ofstream outFile(filePath, std::ios::app);
    if (!outFile.is_open()) return false;

    outFile << username << "," << result << "," << boardState << "\n";
    outFile.close();
    return true;
}

std::map<std::string, int> PlayerHistory::getUserStatistics(const std::string& username) {
    std::map<std::string, int> stats = {{"wins", 0}, {"losses", 0}, {"draws", 0}};
    std::ifstream inFile(filePath);
    if (!inFile.is_open()) return stats;

    std::string line;
    while (std::getline(inFile, line)) {
        std::stringstream ss(line);
        std::string u, result, board;
        std::getline(ss, u, ',');
        std::getline(ss, result, ',');
        std::getline(ss, board);

        if (u == username) {
            if (result == "win") stats["wins"]++;
            else if (result == "loss") stats["losses"]++;
            else if (result == "tie") stats["draws"]++;
        }
    }
    return stats;
}

std::vector<std::pair<int, std::string>> PlayerHistory::getUserGames(const std::string& username) {
    std::vector<std::pair<int, std::string>> games;
    std::ifstream inFile(filePath);
    if (!inFile.is_open()) return games;

    std::string line;
    int gameId = 1;
    while (std::getline(inFile, line)) {
        std::stringstream ss(line);
        std::string u, result, board;
        std::getline(ss, u, ',');
        std::getline(ss, result, ',');
        std::getline(ss, board);

        if (u == username) {
            games.emplace_back(gameId, result);
        }
        gameId++;
    }
    return games;
}

std::string PlayerHistory::getLastBoardPosition(int gameId) {
    std::ifstream inFile(filePath);
    if (!inFile.is_open()) return "";

    std::string line;
    int currentId = 1;
    while (std::getline(inFile, line)) {
        if (currentId == gameId) {
            std::stringstream ss(line);
            std::string u, result, board;
            std::getline(ss, u, ',');
            std::getline(ss, result, ',');
            std::getline(ss, board);
            return board;
        }
        currentId++;
    }
    return "";
}
