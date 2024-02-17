//main.cpp
#include <iostream>
#include "190408048.h"

int main() {
    const int MAX_PLAYERS = 4;
    Player players[MAX_PLAYERS];
    int numPlayers;

    std::cout << "Enter the number of players (2 or 4): ";
    std::cin >> numPlayers;

    if (numPlayers != 2 && numPlayers != 4) {
        std::cerr << "Invalid number of players! Exiting." << std::endl;
        return 1;
    }

    configureGame(players, numPlayers);
    std::cout << "\nInitial Configuration:\n";
    printResults(players, numPlayers);

    deductMembers(players, numPlayers);
    std::cout << "\nAfter deducting members:\n";
    printResults(players, numPlayers);


	system("pause>0");
    	return 0;
}