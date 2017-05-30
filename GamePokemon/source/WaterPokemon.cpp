#include "WaterPokemon.h"
#include<iostream>


WaterPokemon::WaterPokemon()
{
}


WaterPokemon::~WaterPokemon()
{
}

void WaterPokemon::normalAttack(Pokemon * target)
{
	int damage = randomDamageGenerator(this->attackPoints*0.7, this->attackPoints*0.9) - target->getDefensePoints();
	target->decreaseHealthPoints(damage);
	this->increaseStaminaPoints(1);
	std::cout << "Zadano " << damage << " obrazen.\n\n";


}

void WaterPokemon::strongAttack(Pokemon * target)
{
	int damage = randomDamageGenerator(this->attackPoints*1.4, this->attackPoints*1.8) - target->getDefensePoints();
	decreaseStaminaPoints(this->getStrongAttackStaminaCost());
	target->decreaseHealthPoints(damage);
	std::cout << "Zadano " << damage << " obrazen.\n\n";
}

void WaterPokemon::setStrongAttackStaminaCost()
{
	this->strongAttackStaminaCost = 2;
}
