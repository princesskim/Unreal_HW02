//Monster.h

#pragma once
#include <string>

class Player; // Player 클래스 존재만 알려주기

class Monster{
protected:
	std::string name;
    int HP;
    int power;
    int defence;
    int speed;

public:
    Monster(std::string InName) : name(InName) {
        HP = 10;
        power = 30;
        defence = 10;
        speed = 10;
    }
    virtual ~Monster() {}
    void attack(Player* playerPtr);

    // getter 함수
    std::string getName() const;
    int getHP() const;
    int getPower() const;
    int getDefence() const;
    int getSpeed() const;

    // setter 함수
    void setName(std::string nickname);
    void setHP(int HP);
    void setPower(int power);
    void setDefence(int defence);
    void setSpeed(int speed);
};

