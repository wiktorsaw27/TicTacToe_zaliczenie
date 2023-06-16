#include "Game.h"
#include "iostream"

Game::Game(Board &b, Unit *u1, Unit *u2) : board{b}, unit1{u1}, unit2{u2}{

}

//Funkcja play zarządza rozgrywką, wykorzystując pętle z warunkiem sprawdzającym, czy któryś gracz już wygrał.
//Inicjuje ruchy graczy oraz odpowiada za sprawdzanie czy wystąpił remis.
std::string Game::play() {

    int n=0;
    while (board.get_game_status() == Running){
        n++;

        unit1->MakeMove();
        if(board.get_game_status() == Finished)
            return unit1->getName();

        if(n==5)
            return "No one win! It's a Draw!";

        unit2->MakeMove();
        if(board.get_game_status() == Finished)
            return unit2->getName();

    }
    return "Error!";
}





