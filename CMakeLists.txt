cmake_minimum_required(VERSION 3.24)
project(Proba_TicTacToe)

set(CMAKE_CXX_STANDARD 17)

add_executable(Proba_TicTacToe main.cpp Board.cpp Board.h Players.cpp Players.h Game.cpp Game.h Bot.cpp Bot.h EasyBot.cpp EasyBot.h HardBot.cpp HardBot.h Unit.cpp Unit.h)
