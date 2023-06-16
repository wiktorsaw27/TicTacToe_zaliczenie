#include "Unit.h"

void Unit::MakeMove() {
    std::cout<<"Error! This is only unit."<<std::endl;
}

Unit::Unit(const std::string &n, Board &b, char s) :  board{b}, name{n}, sign{s} {

}

const std::string &Unit::getName() const {
    return name;
}

char Unit::getSign() const {
    return sign;
}
