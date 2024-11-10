#ifndef CARD_H
#define CARD_H

/** 
 * @brief class that represents a card
 * 
 * @param RANK rank of the card
 * @param SUIT suit of the card
 * 
 * @param isFaceUp is the card face up boolean value
 * 
 * @param getValue returns the value of the card if the card is face up
 * @param flip flips the card
 */
class Card {
public: 
    enum RANK {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK = 10, QUEEN = 10, KING = 10};
    enum SUIT {CLUBS, DIAMONDS, HEARTS, SPADES};

private: 
    bool isFaceUp;

protected: 
    RANK rank;
    SUIT suit;

public:
    Card(RANK r = ACE, SUIT s = SPADES, bool isUp = true); // constructor
    int getValue() const;
    void flip();
};

#endif // CARD_H