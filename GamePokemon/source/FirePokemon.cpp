#include "FirePokemon.h"
#include<iostream>


FirePokemon::FirePokemon()
{
}


FirePokemon::~FirePokemon()
{
}

void FirePokemon::normalAttack(Pokemon * target)
{
	int damage = randomDamageGenerator(this->attackPoints*1, this->attackPoints*1.5) - target->getDefensePoints();
	target->decreaseHealthPoints(damage);
	this->increaseStaminaPoints(1);
	std::cout << "Zadano " << damage << " obrazen.\n\n";


}

void FirePokemon::strongAttack(Pokemon * target)
{
	int damage = randomDamageGenerator(this->attackPoints*2, this->attackPoints*3) - target->getDefensePoints();
	decreaseStaminaPoints(this->getStrongAttackStaminaCost());
	target->decreaseHealthPoints(damage);
	std::cout << "Zadano " << damage << " obrazen.\n\n";
}

void FirePokemon::setStrongAttackStaminaCost()
{
	this->strongAttackStaminaCost = 5;
}
