#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include "header/cards.h"

int main(int argc, char const *argv[]) {
    // Enable UTF-8 console output to properly display Unicode symbols (♥ ♦ ♣ ♠)
    SetConsoleOutputCP(CP_UTF8);

    std::vector<std::string> players;

    if (argc < 2) {
        players = {"Abishek", "Ali", "James", "John", "Evry"};
    } else {
        for (int i = 1; i < argc; i++) { // Skip argv[0] which is program name
            players.emplace_back(argv[i]);
        }
    }

    Poker game(players);

    game.deck.showDeck();
    game.deck.showValue();

    std::cout << "Hit Enter to begin the game..." << std::endl;
    std::cin.ignore();

    game.dealCards();
    game.showHands();
    game.showCommunity();
    game.deck.showDeck();
    game.showStats();

    return 0;
}
