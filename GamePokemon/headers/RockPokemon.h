#pragma once
#include "Pokemon.h"
class RockPokemon :
	public Pokemon
{
public:
	RockPokemon();
	~RockPokemon();
	virtual void normalAttack(Pokemon* target);
	virtual void strongAttack(Pokemon* target);
	virtual void setStrongAttackStaminaCost();
};

