
//Magician.cpp

#include "Magician.h"
#include <iostream>
#include "Monster.h"

void Magician::attack() {
	std::cout << "마법 화살을 쏩니다!" << std::endl;

}

void Magician::attack(Monster* monsterPtr) {
	std::cout << "계산된 데미지로 1회 공격" << std::endl;

	int damage = power - monsterPtr->getDefence();
	if (damage <= 0) damage = 1;
	std::cout << monsterPtr->getName() << "'s Damage: " << damage << std::endl;


	int newHP = monsterPtr->getHP() - 5;
	monsterPtr->setHP(newHP);
	if (newHP > 0) {
		std::cout << monsterPtr->getName() << "'s HP: " << newHP << std::endl;


	}
	else {
		std::cout << "Congratulations!" << std::endl;

	}
}