#include "Poliwag.h"

int Poliwag::poliwagCount = 0;

Poliwag::Poliwag()
{
	poliwagCounter();
}

Poliwag::Poliwag(int MHP, int MSP, int AP, int DP)
{
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


Poliwag::~Poliwag()
{
	poliwagCount--;
}

void Poliwag::setName()
{
	this->name = "Poliwag";
}

void Poliwag::setNormalAttackName()
{
	this->normalAttackName = "Water Sport";
}

void Poliwag::setStrongAttackName()
{
	this->strongAttackName = "Bubble Beam";
}

void Poliwag::poliwagCounter()
{
	if (poliwagCount >= 5)
		throw TooManyPokemons();
	else
		poliwagCount++;
}
