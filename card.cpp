#include "card.h"

Card::Card(RANK r, SUIT s, bool isUp) : rank(r), suit(s), isFaceUp(isUp){}

int Card::getValue() const {

    // implement value calculation based on the card rank

    /* if the card is face down, return 0 */
    if (isFaceUp == false){
        return 0;
    }
    /* if the card is a face card, return 10 */
    else if (rank == JACK || rank == QUEEN || rank == KING){
        return 10;
    }
    /* else, return the rank */
    else {
        return rank;  
    }
}

void Card::flip() {
    
    /* flip the card */
    isFaceUp = !isFaceUp;
}