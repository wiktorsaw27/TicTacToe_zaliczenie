#ifndef PROBA_TICTACTOE_GAME_H
#define PROBA_TICTACTOE_GAME_H
#include "Board.h"
#include "Players.h"


class Game {
    Board & board;
    Players & player1;
    Players & player2;
public:
    Game(Board & b, Players & p1, Players & p2);
    std::string play();
};


#endif //PROBA_TICTACTOE_GAME_H
