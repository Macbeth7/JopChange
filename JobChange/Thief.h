#pragma once
#include "Player.h"

class Thief : public Player
{
public:
	Thief(string nickname);

	virtual void attack() override;

	virtual void attack(Monster* monster) override;

protected:

private:

public:

protected:

private:

};

