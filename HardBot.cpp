#include "HardBot.h"
#include "iostream"


//funkcja wirualna z algorytmem odpowiedzialnym za wykonanie ruchu dla hardbota.
//Algotytm działa tak, iż na początku losuję liczbę z danego zakresu, a następnie sprawdza czy jest ruch, kóry wygrywa grę i go wykonuję.
//Jeśli taki nie istnieje to przypisujemy początkowo wylosowaną liczbę i wykonujemy ruch.
//Algorytm działa w pętli do momentu podania numeru pola które jest dostępne.
void HardBot::MakeMove() {
    bool success = false;
    int rand_pick;
    do{
        //system("cls");
        board.drawBoard();

        rand_pick = rand()%9 + 1;
        if(board.is_possible_HB(rand_pick) && board.winner_move_HB(sign) < 9){
            rand_pick = board.winner_move_HB(sign)+1;
            std::cout<<"dziala"<<std::endl;
        }
        std::cout<<"Co powinno: "<<board.winner_move_HB(sign)+1<<std::endl;
        std::cout<<"liczba do wpisania: "<<rand_pick<<std::endl;
        success = board.move(rand_pick, sign);
    } while (not success);
}

HardBot::HardBot(const std::string &name, Board &board, char sign) : Bot(name, board,sign){

}
