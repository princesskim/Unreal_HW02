//Player.cpp

#include "Player.h"

#include <iostream>
#include <string>

void Player::printPlayerStatus() {
    std::cout << "------------------------------------" << std::endl;
    std::cout << "* 현재 능력치" << std::endl;
    std::cout << "직업: " << job_name << std::endl;
    std::cout << "Lv. " << level << std::endl;
    std::cout << "HP: " << HP << std::endl;
    std::cout << "MP: " << MP << std::endl;
    std::cout << "공격력: " << power << std::endl;
    std::cout << "방어력: " << defence << std::endl;
    std::cout << "정확도: " << accuracy << std::endl;
    std::cout << "속도: " << speed << std::endl;
    std::cout << "------------------------------------" << std::endl;
}

std::string Player::getJobName() const { return job_name; }
std::string Player::getNickname() const { return nickname; }
int Player::getLevel() const  { return level; }
int Player::getHP() const { return HP;  }
int Player::getMP() const { return MP; }
int Player::getPower() const { return power; }
int Player::getDefence() const { return defence; }
int Player::getAccuracy() const { return accuracy; }
int Player::getSpeed() const { return speed; }


void Player::setNickname(std::string nickname) { this->nickname = nickname;  }
void Player::setHP(int HP) { this->HP = HP; }
void Player::setMP(int MP) { this->MP = MP; }
void Player::setPower(int power) { this->power = power; }
void Player::setDefence(int defence) { this->defence = defence; }
void Player::setAccuracy(int accuracy) { this->accuracy = accuracy; }
void Player::setSpeed(int speed) { this->speed = speed; }