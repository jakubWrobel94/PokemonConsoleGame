#include "Charmander.h"

int Charmander::charmanderCount = 0;

Charmander::Charmander()
{
	charmanderCounter();
}

Charmander::Charmander(int MHP, int MSP, int AP, int DP)
{
	charmanderCounter();
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


Charmander::~Charmander()
{
}

void Charmander::setName()
{
	this->name = "Charmander";
}

void Charmander::setNormalAttackName()
{
	this->normalAttackName = "Growl";
}

void Charmander::setStrongAttackName()
{
	this->strongAttackName = "Fire Fang";
}

void Charmander::charmanderCounter()
{
	if (charmanderCount >= 5)
		throw TooManyPokemons();
	else
		charmanderCount++;
}
