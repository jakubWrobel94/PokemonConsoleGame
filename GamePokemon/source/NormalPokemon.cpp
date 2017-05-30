#include "NormalPokemon.h"
#include<iostream>
#include<string>


NormalPokemon::NormalPokemon()
{
}


NormalPokemon::~NormalPokemon()
{
}

void NormalPokemon::normalAttack(Pokemon * target)
{
	int damage = randomDamageGenerator(this->attackPoints*0.8,this->attackPoints*1.2)-target->getDefensePoints();
	target->decreaseHealthPoints(damage);
	this->increaseStaminaPoints(1);
	std::cout << "Zadano " << damage << " obrazen.\n\n";


}

void NormalPokemon::strongAttack(Pokemon * target)
{
	int damage = randomDamageGenerator(this->attackPoints*1.6, this->attackPoints*2.4)-target->getDefensePoints();
	decreaseStaminaPoints(3);
	target->decreaseHealthPoints(damage);
	std::cout << "Zadano " << damage << " obrazen.\n\n";
}

void NormalPokemon::setStrongAttackStaminaCost()
{
	this->strongAttackStaminaCost = 3;
}



