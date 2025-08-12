#pragma once
#include "Player.h"

class Archer : public Player
{
public:
	Archer(string nickname);

	virtual void attack() override;

	virtual void attack(Monster* monster) override;

protected:

private:

public:

protected:

private:

};

