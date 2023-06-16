#ifndef PROBA_TICTACTOE_BOT_H
#define PROBA_TICTACTOE_BOT_H
#include "Board.h"
#include "iostream"
#include "Unit.h"

class Bot : public Unit{
public:
    Bot(const std::string & name,Board &b, char sign);
    virtual void MakeMove();
};


#endif //PROBA_TICTACTOE_BOT_H
