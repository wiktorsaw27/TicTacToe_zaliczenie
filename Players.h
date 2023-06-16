#ifndef PROBA_TICTACTOE_PLAYERS_H
#define PROBA_TICTACTOE_PLAYERS_H
#include "string"
#include "Board.h"
#include "Unit.h"


class Players : public Unit{

public:
    //const std::string &getName() const;
    Players(const std::string & name, Board & board, char sign);
    void MakeMove();
};


#endif //PROBA_TICTACTOE_PLAYERS_H
