#include "Monster.h"
#include "Player.h"

Monster::Monster(string name)
{
    this->name = name;
    HP = 10;
    power = 30;
    defence = 10;
    speed = 10;
}

void Monster::attack(Player* player)
{
    if (getHP() <= 0) return; //if Monster already dead, attack process end

    int Damage = player->getDefence() - getPower();
    
    if (Damage < 0) Damage = 1;

    if (player->setHP(Damage)) // if player survive
    {
        cout << player->getNickname() << "의 남은 체력 : " << player->getHP() << endl;
    }
    else {
        cout << getName() << "의 승리!" << endl;
    }
}

void Monster::setName(string name)
{
    this->name = name;
}

bool Monster::setHP(int HP)
{
    this->HP -= HP;

    if (this->HP > 0)
    {
        return true;
    }
    else {
        HP = 0;
        return false;
    }

    return false;
}

void Monster::setPower(int power)
{
}

void Monster::setDefence(int defence)
{
}

void Monster::setSpeed(int speed)
{
}
