#include "Bot.h"

Bot::Bot(const std::string & name, Board &b, char sign) : Unit(name, b, sign){

}

void Bot::MakeMove() {
    std::cout<<"It's only bot!"<<std::endl;
}
