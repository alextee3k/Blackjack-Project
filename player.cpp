#include "player.h"
#include <iostream>

Player::Player(const std::string &name) : GenericPlayer(name) {}

Player::~Player() {

}

bool Player::isHitting() {
    
    char answer = ' ';

    std::cout << getName() << ", do you want a card? (y/n) ";
    std::cin >> answer;

    if (answer == 'y' || answer == 'Y') {
        std::cout << getName() << " has hit!" << std::endl;
        return true;
    }
    else if (answer == 'n' || answer == 'N') {
        std::cout << getName() << " has stood." << std::endl;
        return false;
    }
    else {
        std::cout << "Please enter a valid response (y/n)" << std::endl;
        return isHitting();
    }
    
}

bool Player::win() const {

    std::cout << getName() << " wins!" << std::endl;
}

bool Player::lose() const {

    std::cout << getName() << " loses!" << std::endl;
}

bool Player::push() const {

    std::cout << getName() << " pushes!" << std::endl;
}