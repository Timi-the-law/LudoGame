//ludo.cpp

#include "190408048.h"

void configureGame(Player players[], int numPlayers) {
    for (int i = 0; i < numPlayers; ++i) {
        std::cout << "Enter Player " << i + 1 << "'s name: ";
        std::cin >> players[i].name;

        std::cout << "Choose a color (Red, Yellow, Green, Blue): ";
        std::string chosenColor;
        std::cin >> chosenColor;

        // Assigning chosen color to player
        if (chosenColor == "Red" || chosenColor == "red" || chosenColor == "RED" ) {
            players[i].house = Colour("Red", 4, true);
        } else if (chosenColor == "Yellow" || chosenColor == "Yellow" || chosenColor == "YELLOW") {
            players[i].house = Colour("Yellow", 4, true);
        } else if (chosenColor == "Green" || chosenColor == "green" || chosenColor == "GREEN") {
            players[i].house = Colour("Green", 4, true);
        } else if (chosenColor == "Blue" || chosenColor == "blue" || chosenColor == "BLUE") {
            players[i].house = Colour("Blue", 4, true);
        } else {
            std::cerr << "Invalid color choice! Defaulting to Red." << std::endl;
            players[i].house = Colour(); // Defaulting to Red
        }
    }
}

void printResults(Player players[], int numPlayers) {
    // Print header
    std::cout << "Name\tHouse\tMember" << std::endl;

    // Print player info
    for (int i = 0; i < numPlayers; ++i) {
        std::cout << players[i].name << "\t"
                  << players[i].house.color << "\t"
                  << players[i].house.members << std::endl;
    }
}

// Function to deduct members from each player
void deductMembers(Player players[], int numPlayers) {
    for (int i = 0; i < numPlayers; ++i) {
        players[i].house.members -= (i + 1); // Deduct members based on player number
        if (players[i].house.members < 0) {
            players[i].house.members = 0; // Ensure members don't go negative
        }
    }
}












