//ludo.h
//THIS IS A HEADER FILE
//it contains all the user defined datatypes

#ifndef LUDO_H
#define LUDO_H

#include <iostream>
#include <string>

struct Colour {
    std::string color;
    int members;
    bool status;

    Colour(std::string col = "Red", int mem = 4, bool stat = false) : color(col), members(mem), status(stat) {}
};

struct Player {
    std::string name;
    Colour house;
};

void configureGame(Player players[], int numPlayers);
void printResults(Player players[], int numPlayers);
void deductMembers(Player players[], int numPlayers);

#endif 


