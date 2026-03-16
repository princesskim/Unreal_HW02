//Main.cpp


#include <iostream>
#include <string>

#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"
#include "Monster.h"



int main()
{
    std::string nickname = "";
    std::cout << "* 닉네임을 입력해주세요: ";
    std::cin >> nickname;

    std::cout << "<전직 시스템>" << std::endl;
    std::cout << nickname << "님, 환영합니다!" << std::endl;
    std::cout << "* 원하시는 직업을 선택해주세요." << std::endl;

    std::string jobs[] = { "전사", "마법사", "도적", "궁수" };
    for (int i = 0; i < 4; i++) {
        std::cout << (i + 1) << ". " << jobs[i] << std::endl;
    }


    std::cout << "선택: ";
    int input = -1;

    while (input < 1 || 4 < input) {
        std::cin >> input;
    }

    
    Player* player = nullptr;

    switch (input) {
    case 1:
        player = new Warrior(nickname);
        break;

    case 2:
        player = new Magician(nickname);
        break;

    case 3:
        player = new Thief(nickname);
        break;

    case 4:
        player = new Archer(nickname);
        break;

    default:
        std::cout << "잘못된 입력입니다." << std::endl;
        return 1;
    }
    
    player->attack();
    player->printPlayerStatus();

    Monster* monster = nullptr;
    monster = new Monster("슬라임");

    std::cout << monster->getName() << "이(가) 나타났다!" << std::endl;

    player->attack(monster);
    monster->attack(player);





    if (player != nullptr) {
        delete player;
        player = nullptr;
    }

    if (monster != nullptr) {
        delete monster;
        monster = nullptr;
    }

    return 0;
}