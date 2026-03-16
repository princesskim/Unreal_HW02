//Archer.h

#pragma once
#include "Player.h"
#include <string>


class Archer : public Player
{
public:
	Archer(std::string InNickname) : Player(InNickname) {
        job_name = "궁수";
        level = 1;
        HP = 90;
        MP = 60;
        power = 20;
        defence = 8;
        accuracy = 25;
        speed = 15;
	}
	virtual ~Archer() {}
	virtual void attack() override;
    virtual void attack(Monster* monsterPtr) override;
};

