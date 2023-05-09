#include "iostream"
#include "Board.h"

Board::Board() {
    data = {'1','2','3','4','5','6','7','8','9'};
}

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

bool Board::row_check(int row) const {
    if(row<=get_row_count() and row>=0)
        return true;
    return false;
}

int Board::get_row_count() const {
    return static_cast<int>(data.size());
}

int Board::get_elem_count(int row) const {
    if(row_check(row))
        return data[row];
    std::cout<<"Error in get_element!!";
    return 0;
}

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

bool Board::move(int num, char & player) {
    if( not row_check(num))
        return false;
    if(data[num-1] == 'x' || data[num-1] == 'o')
        return false;


    if (player == 'O')
        data[num - 1] = 'o';
    if(player == 'X')
        data[num - 1] = 'x';
    return true;
}

bool Board::draw_check() {
    int counte;
    for(int i=0; i<8; ++i){
        if (data[i]=='o' || data[i]=='x')
            counte++;
    }
    if(counte == 8)
        return false;

    return true;
}
