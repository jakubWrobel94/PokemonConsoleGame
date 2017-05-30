#include "Geodude.h"

int Geodude::geodudeCount = 0;

Geodude::Geodude()
{
	geodudeCounter();
}

Geodude::Geodude(int MHP, int MSP, int AP, int DP)
{
	geodudeCounter();
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


Geodude::~Geodude()
{
	geodudeCount--;
}

void Geodude::setName()
{
	this->name = "Geodude";
}

void Geodude::setNormalAttackName()
{
	this->normalAttackName = "Rollout";

}

void Geodude::setStrongAttackName()
{
	this->strongAttackName = "Rock Blast";
}

void Geodude::geodudeCounter()
{
	if (geodudeCount >= 5)
		throw TooManyPokemons();
	else
		geodudeCount++;
}
