#include "Squirtle.h"

int Squirtle::squirtleCount = 0;

Squirtle::Squirtle()
{
	squirtleCounter();
}

Squirtle::Squirtle(int MHP, int MSP, int AP, int DP)
{
	squirtleCounter();
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


Squirtle::~Squirtle()
{
	squirtleCount--;
}

void Squirtle::setName()
{
	this->name = "Squirtle";
}

void Squirtle::setNormalAttackName()
{
	this->normalAttackName = "Water Gun";
}

void Squirtle::setStrongAttackName()
{
	this->strongAttackName = "Water Pulse";
}

void Squirtle::squirtleCounter()
{
	if (squirtleCount >= 5)
		throw TooManyPokemons();
	else
		squirtleCount++;
}
