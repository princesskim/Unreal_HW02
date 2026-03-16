//Thief.cpp


#include "Thief.h"
#include <iostream>
#include "Monster.h"

void Thief::attack() {
	std::cout << "단검으로 재빠르게 공격합니다!" << std::endl;

}

void Thief::attack(Monster* monsterPtr) {
	std::cout << "계산된 데미지/3으로 3회 공격 (소수점 생략)" << std::endl;
	
	int damage = power - monsterPtr->getDefence();
	damage /= 3;
	
	if (damage == 0) damage = 1;
	for (int i = 0; i < 3; ++i) {
		std::cout << "* " << monsterPtr->getName() << "에게 단검으로 " << damage << "의 피해를 입혔다!" << std::endl;
	
	}


	std::cout << monsterPtr->getName() << "'s Damage: " << damage * 3 << std::endl;


	int newHP = monsterPtr->getHP() - 5;
	monsterPtr->setHP(newHP);
	if (newHP > 0) {
		std::cout << monsterPtr->getName() << "'s HP: " << newHP << std::endl;


	}
	else {
		std::cout << "Congratulations!" << std::endl;

	}
}