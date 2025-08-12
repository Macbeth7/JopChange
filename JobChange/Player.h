#pragma once
#include <string>
#include <iostream>

using namespace std;

class Monster;

class Player {
public:
    Player(string nickname);

    virtual void attack() = 0;
    virtual void attack(Monster* monster) = 0;
    
    void printPlayerStatus();

    // getter 함수
    string getJobName() { return  job_name; };
    string getNickname() { return nickname; };
    int getLevel() { return level; };
    int getHP() { return HP; };
    int getMP() { return MP; };
    int getPower() { return power; };
    int getDefence() { return defence; };
    int getAccuracy() { return accuracy; };
    int getSpeed() { return speed; };

    // setter 함수
    void setNickname(string nickname);
    bool setHP(int HP);
    bool setMP(int MP);
    void setPower(int power);
    void setDefence(int defence);
    void setAccuracy(int accuracy);
    void setSpeed(int speed);

protected:
    string job_name;
    string nickname = "NONE";
    int level = 0;
    int HP = 0;
    int MP = 0;
    int power = 0;
    int defence = 0;
    int accuracy = 0;
    int speed = 0;
};