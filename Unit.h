#ifndef PROBA_TICTACTOE_UNIT_H
#define PROBA_TICTACTOE_UNIT_H
#include "Board.h"
#include "string"
#include "iostream"

class Unit {
    std::string name;
public:
    Board & board;
    char sign;
    Unit(const std::string & n, Board & b, char sign);
    virtual void MakeMove();
    const std::string &getName() const;
    char getSign() const;
};


#endif //PROBA_TICTACTOE_UNIT_H
