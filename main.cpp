#include <iostream>
#include "string"
#include "Board.h"
#include "Players.h"
#include "Game.h"
#include "Unit.h"
#include "EasyBot.h"
#include "HardBot.h"


int main(){
    srand(time(0));

    int switch_choose;
    for(;;){

        std::cout<<"Tic Tac Toe"<<std::endl;
        std::cout<<"---------------"<<std::endl;
        std::cout<<"1. Player vr Player"<<std::endl;
        std::cout<<"2. Player vs EasyBot"<<std::endl;
        std::cout<<"3. Player vs HardBot"<<std::endl;
        std::cout<<"4. EasyBot vs HardBot"<<std::endl;
        std::cout<<"5. Exit"<<std::endl;

        std::cout<<std::endl;

        std::cout<<"Choose game: ";
        std::cin>>switch_choose;



        switch(switch_choose)
        {
            case 1:
            {
                Board b1;
                std::string name1;
                std::string name2;
                std::cout<<"Name for player X: "<<name1<< std::endl;
                std::cin>>name1;
                std::cout<<"Name for player O: "<<name2<< std::endl;
                std::cin>>name2;
                Players pX(name1, b1, 'x');
                Players pO(name2, b1, 'o');
                Game g1(b1, &pX, &pO);
                std::string winner = g1.play();
                system("cls");
                b1.drawBoard();
                std::cout<<"Winner is: "<< winner << std::endl;
            }
                break;

            case 2:
            {
                Board b2;
                Players pX("Player", b2, 'x');
                EasyBot EbO("Easy Bot", b2, 'o');
                Game g1(b2, &pX, &EbO);
                std::string winner = g1.play();
                system("cls");
                b2.drawBoard();
                std::cout<<"Winner is: "<< winner << std::endl;
            }
                break;

            case 3:
            {
                Board b3;
                Players pX("Player", b3, 'x');
                HardBot HbO("Hard Bot", b3, 'o');
                Game g1(b3, &pX, &HbO);
                std::string winner = g1.play();
                system("cls");
                b3.drawBoard();
                std::cout<<"Winner is: "<< winner << std::endl;
            }
                break;

            case 4:
            {
                Board b4;
                EasyBot EbX("EasyBot", b4, 'x');
                HardBot HbO("Hard Bot", b4, 'o');
                Game g1(b4, &EbX, &HbO);
                std::string winner = g1.play();
                system("cls");
                b4.drawBoard();
                std::cout<<"Winner is: "<< winner << std::endl;
            }
                break;


            case 5:
                exit(0);
                break;
            default: std::cout<<"Wrong number! Choose again."<<std::endl;exit(0);
                break;
        }
        getchar();getchar();
        system("cls");
    }



    return 0;
};
