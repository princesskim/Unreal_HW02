//Thief.h

#pragma once
#include "Player.h"
#include <string>


class Thief : public Player
{
public:
	Thief(std::string InNickname) : Player(InNickname) {
        job_name = "도적";
        level = 1;
        HP = 100;
        MP = 50;
        power = 15;
        defence = 10;
        accuracy = 20;
        speed = 25;
	}
	virtual ~Thief() {}
	virtual void attack() override;
    virtual void attack(Monster* monsterPtr) override;
};

