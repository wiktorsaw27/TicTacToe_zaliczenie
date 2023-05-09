#include "Players.h"
#include "iostream"

Players::Players(const std::string &n, Board &b, char s) :  board{b}, name{n}, sign{s} {

}

void Players::MakeMove() {
    bool success = false;
    do{
        board.drawBoard();
        int row;
        std::cout<< name << " with mark " << sign <<" make move: "<< std::endl;
        std::cin>> row;

        success = board.move(row, sign);
    } while (not success);
}

const std::string &Players::getName() const {
    return name;
}
