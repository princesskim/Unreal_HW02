//Magician.h

#pragma once
#include "Player.h"
#include <string>


class Magician : public Player
{
public:
	Magician(std::string InNickname) : Player(InNickname) {
        job_name = "마법사";
        level = 1;
        HP = 80;
        MP = 120;
        power = 25;
        defence = 5;
        accuracy = 15;
        speed = 10;
	}
	virtual ~Magician() {}
	virtual void attack() override;
    virtual void attack(Monster* monsterPtr) override;
};

