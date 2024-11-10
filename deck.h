#ifndef DECK_H
#define DECK_H

#include "hand.h"
#include "genericPlayer.h"

/**
 * @brief
 * 
 * @param
 * @param
 * @param
 * @param
 * 
 */

class Deck : public Hand{

public: 
    Deck();
    virtual ~Deck();
    void populate();
    void shuffle();
    void deal(Hand &aHand);
    void additionalCards(GenericPlayer &aGenericPlayer);

};


#endif // DECK_H