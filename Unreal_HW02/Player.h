//Player.h

#pragma once
#include <string>

class Monster; // Monster 클래스 존재만 알려주기

class Player {
protected:
    std::string job_name;
    std::string nickname;
    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;

public:
    Player(std::string InNickname) : nickname(InNickname) {}
    virtual ~Player() {} //부모 클래스 소멸자에 virtual 키워드를 붙여야 자식 객체가 안전하게 사라짐

    virtual void attack() = 0;
    virtual void attack(Monster* monster) = 0;

    void printPlayerStatus();

    // getter 함수
    std::string getJobName() const;
    std::string getNickname() const;
    int getLevel() const;
    int getHP() const;
    int getMP() const;
    int getPower() const;
    int getDefence() const;
    int getAccuracy() const;
    int getSpeed() const;

    // setter 함수
    void setNickname(std::string nickname);
    void setHP(int HP);
    void setMP(int MP);
    void setPower(int power);
    void setDefence(int defence);
    void setAccuracy(int accuracy);
    void setSpeed(int speed);
};

