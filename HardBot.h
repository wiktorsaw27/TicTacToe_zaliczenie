#ifndef PROBA_TICTACTOE_HARDBOT_H
#define PROBA_TICTACTOE_HARDBOT_H
#include "Bot.h"

class HardBot : public Bot{
public:
    HardBot(const std::string &name, Board &board, char sign);
    virtual void MakeMove();
};


#endif //PROBA_TICTACTOE_HARDBOT_H
