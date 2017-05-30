#include "Pidgey.h"
#include<iostream>

int Pidgey::pidgeyCount = 0;

void Pidgey::setName()
{
	this->name = "Pidgey";
}

void Pidgey::setNormalAttackName()
{
	this->normalAttackName = "Sand Attack";
}

void Pidgey::setStrongAttackName()
{
	strongAttackName = "Wind Attack";
}

void Pidgey::pidgeyCounter()
{
	if (pidgeyCount >= 5)
		throw TooManyPokemons();
	else
		pidgeyCount++;
}



Pidgey::Pidgey()
{
}

Pidgey::Pidgey(int MHP, int MSP, int AP, int DP)
{
	pidgeyCounter();
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


Pidgey::~Pidgey()
{
	pidgeyCount++;
}
