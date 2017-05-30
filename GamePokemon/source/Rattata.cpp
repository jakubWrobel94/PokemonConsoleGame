#include "Rattata.h"

int Rattata::rattataCount = 0;

Rattata::Rattata()
{
	rattataCounter();
}

Rattata::Rattata(int MHP, int MSP, int AP, int DP)
{
	rattataCounter();
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


Rattata::~Rattata()
{
	rattataCount--;
}

void Rattata::setName()
{
	this->name = "Rattata";
}

void Rattata::setNormalAttackName()
{
	this->normalAttackName = "Tail Whip";

}

void Rattata::setStrongAttackName()
{
	this->strongAttackName = "Hyper Fang";
}

void Rattata::rattataCounter()
{
	if (rattataCount >= 5)
		throw TooManyPokemons();
	else
		rattataCount++;
}
