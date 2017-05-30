#include "RockPokemon.h"
#include<iostream>


RockPokemon::RockPokemon()
{
}


RockPokemon::~RockPokemon()
{
}

void RockPokemon::normalAttack(Pokemon * target)
{
	int damage = randomDamageGenerator(this->attackPoints*0.9, this->attackPoints*1.4) - target->getDefensePoints();
	target->decreaseHealthPoints(damage);
	this->increaseStaminaPoints(1);
	std::cout << "Zadano " << damage << " obrazen.\n\n";


}

void RockPokemon::strongAttack(Pokemon * target)
{
	int damage = randomDamageGenerator(this->attackPoints*1.8, this->attackPoints*2.8) - target->getDefensePoints();
	decreaseStaminaPoints(this->getStrongAttackStaminaCost());
	target->decreaseHealthPoints(damage);
	std::cout << "Zadano " << damage << " obrazen.\n\n";
}

void RockPokemon::setStrongAttackStaminaCost()
{
	this->strongAttackStaminaCost = 4;
}
