#pragma once
#include "Pokemon.h"
class FirePokemon :
	public Pokemon
{
public:
	FirePokemon();
	~FirePokemon();
	virtual void normalAttack(Pokemon* target);
	virtual void strongAttack(Pokemon* target);
	virtual void setStrongAttackStaminaCost();
};

