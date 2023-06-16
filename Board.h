#ifndef PROBA_TICTACTOE_BOARD_H
#define PROBA_TICTACTOE_BOARD_H
#include "vector"


enum GameState {Running, Finished};
class Board {
    std::vector<char> data;
public:
    bool row_check(int row) const;
    Board();
    void drawBoard() const;
    int get_row_count() const;
    int get_elem_count(int row) const;
    bool move(int num, char & player);
    GameState get_game_status() const;
    bool is_possible_HB(int num);
    int winner_move_HB(char s);
};


#endif //PROBA_TICTACTOE_BOARD_H
