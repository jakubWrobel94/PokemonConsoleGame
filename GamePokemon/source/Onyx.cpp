#include "Onyx.h"

int Onyx::onyxCount = 0;

Onyx::Onyx()
{
	onyxCounter();
}

Onyx::Onyx(int MHP, int MSP, int AP, int DP)
{
	onyxCounter();
	setName();
	setMaxHealth(MHP);
	setHealthPoints(MHP);
	setMaxStamina(MSP);
	setStaminaPoints(0);
	setAttackPoints(AP);
	setDefensePoints(DP);
	setNormalAttackName();
	setStrongAttackName();
	setStrongAttackStaminaCost();
	awake();
}


Onyx::~Onyx()
{
	onyxCount--;
}

void Onyx::setName()
{
	this->name = "Onyx";
}

void Onyx::setNormalAttackName()
{
	this->normalAttackName = "Rock Throw";
}

void Onyx::setStrongAttackName()
{
	this->strongAttackName = "Smack Down";
}

void Onyx::onyxCounter()
{
	if (onyxCount >= 5)
		throw TooManyPokemons();
	else
		onyxCount++;
}
