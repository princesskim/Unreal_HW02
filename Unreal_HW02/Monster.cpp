//Monster.cpp


#include "Monster.h"
#include <iostream>
#include "Player.h"

void Monster::attack(Player* playerPtr) {
	std::cout << name << "이(가) 공격한다!" << std::endl;


	int damage = power - playerPtr->getDefence();
	if (damage <= 0) damage = 1;
	std::cout << "Your Damage: " << damage << std::endl;

	int newHP = playerPtr->getHP() - 5;
	if (newHP <= 0) newHP = 0;
	playerPtr->setHP(newHP);
	std::cout << "Your HP Updated: " << newHP << std::endl;
}


std::string Monster::getName() const { return name; }
int Monster::getHP() const { return HP; }
int Monster::getPower() const { return power; }
int Monster::getDefence() const { return defence; }
int Monster::getSpeed() const { return speed; }


void Monster::setName(std::string name) { this->name = name; }
void Monster::setHP(int HP) { this->HP = HP; }
void Monster::setPower(int power) { this->power = power; }
void Monster::setDefence(int defence) { this->defence = defence; }
void Monster::setSpeed(int speed) { this->speed = speed; }