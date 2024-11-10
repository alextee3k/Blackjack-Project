#include "hand.h"
#include <vector>

Hand::Hand() {
    cardVector.reserve(7);
}

Hand::~Hand() {
    clearHand();
}

void Hand::add(Card* cardPtr) {
    cardVector.push_back(cardPtr);
}

void Hand::clearHand() {
    for (auto iter = cardVector.begin(); iter != cardVector.end(); ++iter)
    {
        delete *iter; /* delete each card */
        *iter = nullptr; /*  set each entry to null */
    }
    cardVector.clear(); /* clear the vector */
}

int Hand::getTotal() const {
    /* If the hand is empty, return 0 */
    if (cardVector.empty()) {
        return 0;
    }

    int total = 0; /* Initialize total to 0 */
    bool hasAce = false; /* flag to check if there is an ace in the hand */

    /* iterate over all cards in the hand and sum their values */
    for (auto iter = cardVector.begin(); iter != cardVector.end(); ++iter) {
        total += (*iter)->getValue();
        /* if card is 1, assume ace, set flag to true */
        if ((*iter)->getValue() == 1) {
            hasAce = true;
        }
    }
    /* if there is an ace and the total is less than 11, add 10 to the total */
    if (hasAce && total <= 11) {
        total += 10;
    }
    return total;
}