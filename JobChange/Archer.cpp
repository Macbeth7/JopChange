#include "Archer.h"
#include "Monster.h"

Archer::Archer(string nickname) : Player(nickname)
{
	job_name = "Archer";
    HP = 30;
    power = 20;
    defence = 10;
    speed = 15;
}

void Archer::attack()
{

}

void Archer::attack(Monster* monster)
{
    if (getHP() <= 0) return; //if Archer already dead, attack process end

    int Damage = monster->getDefence() - getPower();
    int ArcherDamge = Damage / 3;

    if (ArcherDamge >= 0) ArcherDamge = -1;

    for (int Attack_Count = 0; Attack_Count < 3; Attack_Count++)
    {
        if (monster->setHP(ArcherDamge)) // if monster survive
        {
            cout << monster->getName() << "의 남은 체력 : " << monster->getHP() << endl;
        }
        else {
            cout << getNickname() << "의 승리!" << endl;
            
            return;
        }
    }
}
