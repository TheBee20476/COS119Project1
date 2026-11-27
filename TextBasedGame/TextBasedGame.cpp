// TextBasedGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Player.h"

int main()
{
    std::cout << "==== TITLE ====\n";
    std::cout << "What is your name traveler?\n";

    std::string playerName = "";

    std::getline(std::cin, playerName);

    Player player(playerName);

    std::cout << "\n";
    Player::PrintStats(player);

    std::cout << "\nWelcome to the world of Polaria, " << player.GetName() << "!\n";

    std::cout << "You begin your journey in an unfamiliar wood.\n What would you like to do first?\n" <<
        "1. Gather Resources\n2. Explore the woods\n3. Train\n" << "Choose an option: \n";

    std::cin.clear();
    int choice = 0;

    while (choice == 0)
    {
        std::cin >> choice;

        switch (choice)
        {
        case 1: 
            break;
        case 2:
            break;
        case 3:
            Player::TrainAttack(player);
            Player::PrintStats(player);
            break;
        default:
            std::cout << "Invalid option. Please choose an option from the menu.\n";
        }
    }


}

