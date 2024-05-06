#include "ttt.hpp"

#include <string>
#include <sstream>
#include <iomanip>


class game{
public:
    void play();
    bool checkwin() const;
    bool checkdraw() const;
private:
};

class player{
public:
    player(char player_sumbol_,std::string name_) : player_symbol(player_sumbol_), name(name_) {}
    void p_sign();
    void p_move();
    std::string getname() const {return name;};
    char getPsymbol() const {return player_symbol;};
private:
    char player_symbol;
    std::string name;
};

class board:player{
public:
    board();
    void sign_board_to_UI();
private:
    std::vector<std::vector<char>> lattice;
};

