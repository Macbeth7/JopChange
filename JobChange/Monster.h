#pragma once
#include <string>
#include <iostream>

using namespace std;

class Player;

class Monster
{
public:
    Monster(string name);

    void attack(Player* player); 

    // getter 함수
    string getName() { return name; };
    int getHP() { return HP; };
    int getPower() { return power; };
    int getDefence() { return defence; };
    int getSpeed() { return speed; };

    // setter 함수
    void setName(string name);
    bool setHP(int HP);
    void setPower(int power);
    void setDefence(int defence);
    void setSpeed(int speed);

protected:
    string name = "NONE";    
    int HP = 0;
    int power = 0;
    int defence = 0;
    int speed = 0;
};

