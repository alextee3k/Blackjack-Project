#ifndef HAND_H
#define HAND_H

#include "card.h"
#include <vector>

/** 
 * @brief class that represents a hand of cards
 * 
 * @param add adds a card to the hand
 * @param clearHand clears the hand
 * @param getTotal gets the total value of the hand
 */

class Hand {

protected: 
    std::vector<Card*> cardVector; /* vector of cards in hand */

public: 
    Hand(); /* constructor */
    virtual ~Hand(); /* destructor */
    void add(Card* cardPtr); 
    void clearHand(); 
    int getTotal() const; 

};

#endif // HAND_H