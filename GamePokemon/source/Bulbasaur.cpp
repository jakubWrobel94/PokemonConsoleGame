#include "Bulbasaur.h"

int Bulbasaur::bulbasaurCount = 0;

Bulbasaur::Bulbasaur()
{
	bulbasaurCount--;
}

Bulbasaur::Bulbasaur(int MHP, int MSP, int AP, int DP)
{

		bulbasaurCounter();
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


Bulbasaur::~Bulbasaur()
{
}

void Bulbasaur::setName()
{
	this->name = "Bulbasaur";

}

void Bulbasaur::setNormalAttackName()
{
	this->normalAttackName = "Vine Whip";
}

void Bulbasaur::setStrongAttackName()
{
	this->strongAttackName = "Seed Bomb";
}

void Bulbasaur::bulbasaurCounter()
{
	if (bulbasaurCount > 5)
		throw TooManyPokemons();
	else
		bulbasaurCount++;
}
