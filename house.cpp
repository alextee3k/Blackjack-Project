#include "house.h"
#include <iostream>

House::House(const std::string &name) : GenericPlayer(name) {}

House::~House() {}

bool House::isHitting() {
    
    if (getTotal() <= 16) {
        return true;
    }
    else {
        return false;
    }


}
void House::flipFirstCard() { 

    /* if the hand is not empty, flip the first card */
    if (!cardVector.empty()) {
        cardVector[0]->flip();
    }
    /* if the hand is empty, print an error message */
    else {
        std::cout << "No card to flip" << std::endl;
    }
}
