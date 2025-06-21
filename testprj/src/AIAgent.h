#ifndef AIAGENT_H
#define AIAGENT_H

class Board;

class AIAgent {
public:
    AIAgent() = default;
    virtual ~AIAgent() = default;

    virtual int play(Board& board) = 0;
    virtual void reset() {}
};

#endif // AIAGENT_H
