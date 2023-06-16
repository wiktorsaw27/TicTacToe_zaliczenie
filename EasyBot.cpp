#include "EasyBot.h"
#include "iostream"
EasyBot::EasyBot(const std::string &name, Board &board, char sign) : Bot(name, board,sign) {

}

//funkcja wirualna z algorytmem odpowiedzialnym za wykonanie ruchu dla easybota.
//Algotytm działa tak, że losuję liczbę z danego zakresu i wykonuję ruch.
//Algorytm działa w pętli do momentu podania numeru pola które jest dostępne.
void EasyBot::MakeMove() {
    bool success = false;
    do{
        system("cls");
        board.drawBoard();
        int num;
        num = rand()%9 + 1;

        success = board.move(num, sign);
    } while (not success);
}


