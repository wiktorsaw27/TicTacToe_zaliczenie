#include <iostream>
#include <vector>
#include "Board.h"
#include "Players.h"
#include "Game.h"


int main(){
    Board b1;
    //.drawBoard();

    Players pX("Player 1", b1, 'X');
    Players pO("Player 2", b1, 'O');
    Game g1(b1, pX, pO);
    std::string winner = g1.play();
    b1.drawBoard();
    std::cout<<"Winner is: "<< winner;
};
