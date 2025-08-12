#include "Warrior.h"
#include "Monster.h"

Warrior::Warrior(string nickname) : Player(nickname)
{
	job_name = "Warrior";
}

void Warrior::attack()
{

}

void Warrior::attack(Monster* monster)
{
    if (getHP() <= 0) return; //if Warrior already dead, attack process end

    int Damage = monster->getDefence() - getPower();

    if (Damage < 0) Damage = 1;

    if (monster->setHP(Damage)) // if monster survive
    {
        cout << monster->getName() << "의 남은 체력 : " << monster->getHP() << endl;
    }
    else {
        cout << getNickname() << "의 승리!" << endl;
    }
}
