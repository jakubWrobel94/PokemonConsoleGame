#include "Charizard.h"

int Charizard::charizardCount = 0;

Charizard::Charizard()
{
	charizardCounter();
}

Charizard::Charizard(int MHP, int MSP, int AP, int DP)
{
	charizardCounter();
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


Charizard::~Charizard()
{
	charizardCount--;
}

void Charizard::setName()
{
	this->name = "Charizard";
}

void Charizard::setNormalAttackName()
{
	this->normalAttackName = "Heat Wave";
}

void Charizard::setStrongAttackName()
{
	strongAttackName = "Inferno";
}

void Charizard::charizardCounter()
{
	if (charizardCount >= 5)
		throw TooManyPokemons();
	else
	charizardCount++;
}
