//Warrior.h

#pragma once
#include "Player.h"
#include <string>

class Warrior : public Player
{
public:
    
    Warrior(std::string InNickname) : Player(InNickname) {
        job_name = "전사";
        level = 1;
        HP = 150;
        MP = 30;
        power = 20;
        defence = 15;
        accuracy = 10;
        speed = 5;
	}
	virtual ~Warrior() {}
	virtual void attack() override;
    virtual void attack(Monster* monsterPtr) override;
};

