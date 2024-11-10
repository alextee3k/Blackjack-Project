#ifndef GENERICPLAYER_H
#define GENERICPLAYER_H

#include <string>   
#include "hand.h"

/** 
 * @brief class that represents a generic player
 * 
 * @param name name of the player
 * @param isHitting is the player hitting
 * @param isBusted is the player busted
 * @param bust busts the player
 * @param getName returns the name of the player
 * @param setName sets the name of the player
 * 
 * 
 */
class GenericPlayer : public Hand {

private: 
    std::string name;

public: 
    GenericPlayer(const std::string &name = " "); /* default constructor */
    virtual ~GenericPlayer(); /* default destructor */

    virtual bool isHitting() = 0; 
    bool isBusted();
    bool bust();

    std::string getName() const;
    void setName(std::string name);

};
#endif // GENERICPLAYER_H