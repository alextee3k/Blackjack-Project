#ifndef HOUSE_H
#define HOUSE_H

#include "genericPlayer.h"

/** 
 * @brief class that represents the house
 * 
 * @param
 * @param
 * @param
 * @param
 * @param
 */

class House : public GenericPlayer {
public: 

    House(const std::string &name = "Dealer");
    virtual ~House();

    virtual bool isHitting() override;
    void flipFirstCard();

};

#endif // HOUSE_H