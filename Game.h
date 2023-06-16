#ifndef PROBA_TICTACTOE_GAME_H
#define PROBA_TICTACTOE_GAME_H
#include "Board.h"
#include "Players.h"
#include "Bot.h"
#include "Unit.h"


class Game {
    Board & board;
    Unit *unit1;
    Unit *unit2;
public:
    Game(Board & b, Unit *u1, Unit *u2);
    std::string play();
};


#endif //PROBA_TICTACTOE_GAME_H
