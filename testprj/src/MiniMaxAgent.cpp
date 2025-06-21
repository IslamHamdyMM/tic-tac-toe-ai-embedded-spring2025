#include "MiniMaxAgent.h"
#include <climits>
#include <utility>

MiniMaxAgent::MiniMaxAgent(unsigned short depth, BoardMarks AImark, BoardMarks playerMark)
    : depth_(depth), AImark_(AImark), playerMark_(playerMark) {}

short MiniMaxAgent::maxMove(Board& board, unsigned short depth, short alpha, short beta) const {
    BoardState state = board.evaluateBoard();
    if (depth == 0 || state != BoardState::NoWinner)
        return score(state);

    short bestScore = SHRT_MIN;
    for (size_t row = 0; row < board.size(); ++row) {
        for (size_t col = 0; col < board.size(); ++col) {
            if (board.at(row, col) == BoardMarks::Empty) {
                board.setPlayerInput(row, col, AImark_);
                short score = minMove(board, depth - 1, alpha, beta);
                board.resetCell(row, col);
                bestScore = std::max(bestScore, score);
                alpha = std::max(alpha, score);
                if (beta <= alpha)
                    return bestScore;
            }
        }
    }
    return bestScore;
}

short MiniMaxAgent::minMove(Board& board, unsigned short depth, short alpha, short beta) const {
    BoardState state = board.evaluateBoard();
    if (depth == 0 || state != BoardState::NoWinner)
        return score(state);

    short bestScore = SHRT_MAX;
    for (size_t row = 0; row < board.size(); ++row) {
        for (size_t col = 0; col < board.size(); ++col) {
            if (board.at(row, col) == BoardMarks::Empty) {
                board.setPlayerInput(row, col, playerMark_);
                short score = maxMove(board, depth - 1, alpha, beta);
                board.resetCell(row, col);
                bestScore = std::min(bestScore, score);
                beta = std::min(beta, score);
                if (beta <= alpha)
                    return bestScore;
            }
        }
    }
    return bestScore;
}

short MiniMaxAgent::score(BoardState state) const {
    if ((AImark_ == BoardMarks::O && state == BoardState::OWins) ||
        (AImark_ == BoardMarks::X && state == BoardState::XWins))
        return AI_WIN_SCORE;

    if ((AImark_ == BoardMarks::O && state == BoardState::XWins) ||
        (AImark_ == BoardMarks::X && state == BoardState::OWins))
        return PLAYER_WIN_SCORE;

    return TIE_SCORE;
}

int MiniMaxAgent::play(Board& board) {
    if (board.evaluateBoard() != BoardState::NoWinner)
        return -1;

    int bestScore = INT_MIN;
    std::pair<size_t, size_t> bestMove = {0, 0};

    for (size_t row = 0; row < board.size(); ++row) {
        for (size_t col = 0; col < board.size(); ++col) {
            if (board.at(row, col) == BoardMarks::Empty) {
                board.setPlayerInput(row, col, AImark_);
                int score = minMove(board, depth_ - 1, SHRT_MIN, SHRT_MAX);
                board.resetCell(row, col);

                if (score > bestScore) {
                    bestScore = score;
                    bestMove = {row, col};
                }
            }
        }
    }

    board.setPlayerInput(bestMove.first, bestMove.second, AImark_);
    return static_cast<int>(bestMove.first * board.size() + bestMove.second);
}
