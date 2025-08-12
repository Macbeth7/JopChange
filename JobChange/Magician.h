#pragma once
#include "Player.h"


class Magician : public Player
{
public:
	Magician(string nickname);

	virtual void attack() override;

	virtual void attack(Monster* monster) override;

protected:

private:

public:

protected:

private:

};

