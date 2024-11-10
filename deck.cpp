#include "deck.h"
#include <algorithm>
#include <random>
#include <iostream>


Deck::Deck()
{
    cardVector.reserve(52);
    populate();
}

Deck::~Deck()
{
    
}

void Deck::populate(){

    clearHand();
    /* populate the deck with nested loop here */
    for (int s = Card::CLUBS; s <= Card::SPADES; s++){
        for (int r = Card::ACE; r <= Card::KING; r++){
            /* create a new card with rank and suit */
            add(new Card(static_cast<Card::RANK>(r), static_cast<Card::SUIT>(s)));
        }
    }
    
}

void Deck::shuffle()
{
    /* figure out a solution for random shuffle */
}

void Deck::deal(Hand &aHand)
{
    /* if the deck is not empty */
    if (!cardVector.empty()){
        
        /* deal a card */
        aHand.add(cardVector.back());
        std::cout << "Dealt " << std::endl;

        /* remove the card from the deck */
        cardVector.pop_back();
    }
    else {
        /* print if the deck is empty */
        std::cout << "The deck is empty! " << std::endl;
    }
}

void additionalCards(GenericPlayer &aGenericPlayer){

    while (!aGenericPlayer.bust() && aGenericPlayer.isHitting()){

        this->deal(aGenericPlayer);

        if (aGenericPlayer.isBusted()){
            aGenericPlayer.bust();
        }
    }


}

