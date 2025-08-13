#include "Magician.h"
#include "Monster.h"

Magician::Magician(string nickname) : Player(nickname)
{
	job_name = "Magician";
    HP = 30;
    power = 35;
    defence = 15;
    speed = 10;
}

void Magician::attack()
{

}

void Magician::attack(Monster* monster)
{
    if (getHP() <= 0) return; //if Magician already dead, attack process end

    int Damage = monster->getDefence() - getPower();

    if (Damage > 0) Damage = -1;

    if (monster->setHP(Damage)) // if monster survive
    {
        cout << monster->getName() << "의 남은 체력 : " << monster->getHP() << endl;
    }
    else {
        cout << getNickname() << "의 승리!" << endl;
    }
}
