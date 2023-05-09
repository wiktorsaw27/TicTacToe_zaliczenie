#ifndef PROBA_TICTACTOE_PLAYERS_H
#define PROBA_TICTACTOE_PLAYERS_H
#include "string"
#include "Board.h"


class Players {
    Board & board;
    const std::string name;
    char sign;
public:
    const std::string &getName() const;
    Players(const std::string & n, Board & b, char sign);
    void MakeMove();
};


#endif //PROBA_TICTACTOE_PLAYERS_H
