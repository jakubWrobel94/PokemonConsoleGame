#include "Oddish.h"

int Oddish::oddishCount = 0;

Oddish::Oddish()
{
	oddishCounter();
}

Oddish::Oddish(int MHP, int MSP, int AP, int DP)
{
	oddishCounter();
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


Oddish::~Oddish()
{
	oddishCount--;
}

void Oddish::setName()
{
	this->name = "Oddish";
}

void Oddish::setNormalAttackName()
{
	this->normalAttackName = "Acid";
}

void Oddish::setStrongAttackName()
{
	this->strongAttackName = "Mega Drain";
}

void Oddish::oddishCounter()
{
	if (oddishCount >= 5)
		throw TooManyPokemons();
	else
		oddishCount++;
}
