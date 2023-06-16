#ifndef PROBA_TICTACTOE_EASYBOT_H
#define PROBA_TICTACTOE_EASYBOT_H
#include "Bot.h"

class EasyBot : public Bot{
public:
    EasyBot(const std::string &name, Board &board, char sign);
    virtual void MakeMove();
};


#endif //PROBA_TICTACTOE_EASYBOT_H
