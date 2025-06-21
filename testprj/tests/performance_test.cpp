#include <iostream>
#include <chrono>
#include "Board.h"
#include "MiniMaxAgent.h"
#include "PlayerHistory.h"

void measureBoardEvaluation() {
    Board board(3);
    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(0, 1, BoardMarks::X);
    board.setPlayerInput(0, 2, BoardMarks::X);

    auto start = std::chrono::high_resolution_clock::now();
    BoardState result = board.evaluateBoard();
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double, std::micro> duration = end - start;
    std::cout << "[Board Evaluation] Time: " << duration.count() << " µs\n";
}

void measureAIMove() {
    Board board(3);
    board.setPlayerInput(0, 0, BoardMarks::X);
    board.setPlayerInput(1, 1, BoardMarks::O);
    board.setPlayerInput(0, 1, BoardMarks::X);

    MiniMaxAgent ai(6, BoardMarks::O, BoardMarks::X);

    auto start = std::chrono::high_resolution_clock::now();
    int move = ai.play(board);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double, std::micro> duration = end - start;
    std::cout << "[AI Move Generation] Time: " << duration.count() << " µs\n";
    std::cout << "AI Chose Index: " << move << "\n";
}

void measureHistoryIO() {
    PlayerHistory history("perf_history.txt");

    std::string user = "tester";
    std::string result = "win";
    std::string board = "XOXOXOXOX";

    auto startWrite = std::chrono::high_resolution_clock::now();
    history.recordGame(user, result, board);
    auto endWrite = std::chrono::high_resolution_clock::now();

    auto startRead = std::chrono::high_resolution_clock::now();
    auto stats = history.getUserStatistics(user);
    auto endRead = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double, std::micro> writeTime = endWrite - startWrite;
    std::chrono::duration<double, std::micro> readTime = endRead - startRead;

    std::cout << "[History Write] Time: " << writeTime.count() << " µs\n";
    std::cout << "[History Read] Time: " << readTime.count() << " µs\n";
    std::cout << "Stats: Wins = " << stats["wins"] << "\n";
}

int main() {
    std::cout << "--- Performance Benchmark ---\n\n";

    measureBoardEvaluation();
    measureAIMove();
    measureHistoryIO();

    std::cout << "\n--- End of Benchmark ---\n";
    return 0;
}
