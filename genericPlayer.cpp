#include "genericPlayer.h"
#include <iostream>

GenericPlayer::GenericPlayer(const std::string &name) : name(name) {}

GenericPlayer::~GenericPlayer() {}

bool GenericPlayer::isBusted() {
    if (getTotal() > 21) {
        return true;
    } 
    else {
        return false;
    }
    
}

bool GenericPlayer::bust() {
    if (isBusted()) {
        std::cout << "Player " << name << " busts." << std::endl;
        return true;
    }
    else {
        return false;
    }
}

std::string GenericPlayer::getName() const {
    return name;
}

void GenericPlayer::setName(std::string name) {
    this->name = name;
}