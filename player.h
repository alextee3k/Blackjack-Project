#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

#include "genericPlayer.h"

/** 
 * @brief class that represents a player & their actions
 * 
 * @param isHitting is the player hitting
 * @param win wins the player
 * @param lose loses the player
 * @param push pushes the player
 * 
 */

class Player : public GenericPlayer{

public: 
    Player(const std::string &name = " "); /* default constructor */
    virtual ~Player(); /* default destructor */
    virtual bool isHitting(); 
    bool win() const;
    bool lose() const;
    bool push() const;


};

#endif // PLAYER_H