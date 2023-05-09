#ifndef PROBA_TICTACTOE_BOARD_H
#define PROBA_TICTACTOE_BOARD_H
#include "vector"


enum GameState {Running, Finished};
class Board {
    std::vector<char> data;
    bool row_check(int row) const;
    int counter=0;
public:
    Board();
    void drawBoard() const;
    int get_row_count() const;
    int get_elem_count(int row) const;
    bool move(int num, char & player);
    GameState get_game_status() const;
    bool draw_check();

};


#endif //PROBA_TICTACTOE_BOARD_H
