#include "Player.h"

Player::Player(string nickname)
{
	this->nickname = nickname;

}

void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "직업: " << job_name << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}

void Player::setNickname(string nickname)
{
    this->nickname = nickname;
}

bool Player::setHP(int HP)
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

bool Player::setMP(int MP)
{
    this->MP -= MP;

    if (this->MP > 0)
    {
        return true;
    }
    else {
        return false;
    }


	return false;
}

void Player::setPower(int power)
{
    this->power = power;
}

void Player::setDefence(int defence)
{
    this->defence = defence;
}

void Player::setAccuracy(int accuracy)
{
    this->accuracy = accuracy;
}

void Player::setSpeed(int speed)
{
    this->speed = speed;
}
