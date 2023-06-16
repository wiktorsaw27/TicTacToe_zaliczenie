#include "iostream"
#include "Board.h"

Board::Board() {
    data = {'1','2','3','4','5','6','7','8','9'};
}

//wyświetl tablicę gry
void Board::drawBoard() const {
    std::cout << "   |   |  " << "\n";
    std::cout << " " << data[0] << " | " << data[1] << " | " << data[2]  << "\n";
    std::cout << "___|___|__" << "\n";
    std::cout << "   |   |  " << "\n";
    std::cout << " " << data[3] << " | " << data[4] << " | " << data[5] << "\n";
    std::cout << "___|___|__" << "\n";
    std::cout << "   |   |  " << "\n";
    std::cout << " " << data[6] << " | " << data[7] << " | " << data[8] << "\n";
    std::cout << "   |   |  " << "\n\n";
}

//sprawdza czy wybraliśmy pole z wyznaczonego przedziału
bool Board::row_check(int row) const {
    if(row<=get_row_count() and row>=0)
        return true;
    return false;
}

//zmienia wartość na intiger
int Board::get_row_count() const {
    return static_cast<int>(data.size());
}

//zwraca już zaakceptowaną liczbę komórki
int Board::get_elem_count(int row) const {
    if(row_check(row))
        return data[row];
    std::cout<<"Error in get_element!!";
    return 0;
}

//funkcja która sprawdza czy gra się skończyła(przeszukuję wszystkie wygrywające warianty)
GameState Board::get_game_status() const {
//Pion i poziom
    for(int i=0;i<9;i=i+3){
        if(data[i] == 'x' && data[i+1] == 'x' && data[i+2] == 'x')
            return Finished;
        if(data[i] == 'o' && data[i+1] == 'o' && data[i+2] == 'o')
            return Finished;
    }
    for(int i=0;i<3;i++){
        if(data[i] == 'x' && data[i+3] == 'x' && data[i+6] == 'x')
            return Finished;
        if(data[i] == 'o' && data[i+3] == 'o' && data[i+6] == 'o')
            return Finished;
    }
//Diagonale
    if(data[0] == 'x' && data[4] == 'x' && data[8] == 'x')
        return Finished;
    if(data[2] == 'x' && data[4] == 'x' && data[6] == 'x')
        return Finished;
    if(data[0] == 'o' && data[4] == 'o' && data[8] == 'o')
        return Finished;
    if(data[2] == 'o' && data[4] == 'o' && data[6] == 'o')
        return Finished;

    return Running;

}

//sprawdza legalność ruchu i go wykonuję
bool Board::move(int num, char & player) {
    if( not row_check(num))
        return false;
    if(data[num-1] == 'x' || data[num-1] == 'o')
        return false;


    if (player == 'o')
        data[num - 1] = 'o';
    if(player == 'x')
        data[num - 1] = 'x';
    return true;
}

//sprawdza czy ruch który chcemy wykonać jest legalny(funkcja stworzona wyłącznie dla HardBot)
bool Board::is_possible_HB(int num) {
    if( not row_check(num))
        return false;
    if(data[num] == 'x' || data[num] == 'o')
        return false;
    return true;
}

//Algorytm stworzony dla HardBot, wykonuję ruch wygrywający jeśli taki istnieje
int Board::winner_move_HB(char s) {
   //Poziom
    if(data[0] == s && data[1] == s)
        return 2;
    if(data[0] == s && data[2] == s)
        return 1;
    if(data[1] == s && data[2] == s)
        return 0;
    if(data[3] == s && data[4] == s)
        return 5;
    if(data[3] == s && data[5] == s)
        return 4;
    if(data[4] == s && data[5] == s)
        return 3;
    if(data[6] == s && data[7] == s)
        return 8;
    if(data[6] == s && data[8] == s)
        return 7;
    if(data[7] == s && data[8] == s)
        return 6;

   //Pion
    if(data[5] == s && data[8] == s)
        return 2;
    if(data[4] == s && data[7] == s)
        return 1;
    if(data[3] == s && data[6] == s)
        return 0;
    if(data[2] == s && data[8] == s)
        return 5;
    if(data[1] == s && data[7] == s)
        return 4;
    if(data[0] == s && data[6] == s)
        return 3;
    if(data[2] == s && data[5] == s)
        return 8;
    if(data[1] == s && data[4] == s)
        return 7;
    if(data[0] == s && data[3] == s)
        return 6;

   //Diagonala
    if(data[0] == s && data[4] == s)
        return 8;
    if(data[0] == s && data[8] == s)
        return 4;
    if(data[4] == s && data[8] == s)
        return 0;

    if(data[4] == s && data[6] == s)
        return 2;
    if(data[2] == s && data[6] == s)
        return 4;
    if(data[2] == s && data[4] == s)
        return 6;

    return 10;
}



