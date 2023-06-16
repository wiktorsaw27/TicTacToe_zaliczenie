#include "Players.h"
#include "iostream"

Players::Players(const std::string &name, Board &board, char sign) : Unit(name, board, sign) {

}

//Funkcja pytająca gracza o wcześniej przekazanym znaku o podanie numeru w jaki chce postawić swój zank, poczym wykonuje ruch.
//Algorytm działa w pętli do momentu podania numeru pola które jest dostępne.
void Players::MakeMove() {
    bool success = false;
    do{
        system("cls");
        board.drawBoard();
        int row;
        std::cout<< getName() << " with mark " << getSign() <<" make move: "<< std::endl;
        std::cin>> row;

        success = board.move(row, sign);
    } while (not success);
}

