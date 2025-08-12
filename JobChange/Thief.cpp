#include "Thief.h"
#include "Monster.h"

Thief::Thief(string nickname) : Player(nickname)
{
	job_name = "Thief";
}

void Thief::attack()
{

}

void Thief::attack(Monster* monster)
{
    if (getHP() <= 0) return; //if Thief already dead, attack process end

    int Damage = monster->getDefence() - getPower();
    int ArcherDamge = Damage / 5;

    if (ArcherDamge <= 0) ArcherDamge = 1;

    for (int Attack_Count = 0; Attack_Count < 5; Attack_Count++)
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
