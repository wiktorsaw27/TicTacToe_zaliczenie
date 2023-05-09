#ifndef PROBA_TICTACTOE_BOT_H
#define PROBA_TICTACTOE_BOT_H
#include "Board.h"

class Bot {
    Board & board;
public:
    Bot(Board &b);
    virtual void move();
};


#endif //PROBA_TICTACTOE_BOT_H
