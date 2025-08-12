#pragma once
#include "Player.h"

class Warrior : public Player {
public:
	Warrior(string nickname);

	virtual void attack() override;

	virtual void attack(Monster* monster) override;
	
protected:

private:

public:

protected:

private:

};