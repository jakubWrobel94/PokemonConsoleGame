#include "GrassPokemon.h"
#include<iostream>



GrassPokemon::GrassPokemon()
{
}


GrassPokemon::~GrassPokemon()
{
}

void GrassPokemon::normalAttack(Pokemon * target)
{
	int damage = randomDamageGenerator(this->attackPoints*0.7, this->attackPoints*1.3) - target->getDefensePoints();
	target->decreaseHealthPoints(damage);
	this->increaseStaminaPoints(1);
	std::cout << "Zadano " << damage << " obrazen.\n\n";


}

void GrassPokemon::strongAttack(Pokemon * target)
{
	int damage = randomDamageGenerator(this->attackPoints*1.4, this->attackPoints*2.6) - target->getDefensePoints();
	decreaseStaminaPoints(this->getStrongAttackStaminaCost());
	target->decreaseHealthPoints(damage);
	std::cout << "Zadano " << damage << " obrazen.\n\n";
}

void GrassPokemon::setStrongAttackStaminaCost()
{
	this->strongAttackStaminaCost = 3;
}
