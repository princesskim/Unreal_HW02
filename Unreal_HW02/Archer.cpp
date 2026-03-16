//Archer.cpp

#include "Archer.h"
#include <iostream>
#include "Monster.h"

void Archer::attack() {
	std::cout << "활을 당겨 화살을 날립니다!" << std::endl;

}

void Archer::attack(Monster* monsterPtr) {
	
	std::cout << "계산된 데미지/5으로 5회 공격 (소수점 생략)" << std::endl;

	int damage = power - monsterPtr->getDefence();
	damage /= 5;

	if (damage == 0) damage = 1;
	for (int i = 0; i < 5; ++i) {
		std::cout << "* " << monsterPtr->getName() << "에게 화살로 " << damage << "의 피해를 입혔다!" << std::endl;

	}


	std::cout << monsterPtr->getName() << "'s Damage: " << damage * 5 << std::endl;

	int newHP = monsterPtr->getHP() - 5;
	monsterPtr->setHP(newHP);
	if (newHP > 0) {
		std::cout << monsterPtr->getName() << "'s HP: " << newHP << std::endl;

	}
	else {
		std::cout << "Congratulations!" << std::endl;

	}
}