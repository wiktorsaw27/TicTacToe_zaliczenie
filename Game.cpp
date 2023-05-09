#include "Game.h"
#include "iostream"

Game::Game(Board &b, Players &p1, Players &p2) : board{b}, player1{p1}, player2{p2} {

}

std::string Game::play() {
    while (board.get_game_status() == Running){
        if(!board.draw_check())
            std::cout<< "Draw!";

        player1.MakeMove();
        if(board.get_game_status() == Finished)
            return player1.getName();

        player2.MakeMove();
        if(board.get_game_status() == Finished)
            return player2.getName();
    }
    return "Error!";
}
