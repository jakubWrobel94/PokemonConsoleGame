#pragma once
#include "Pokemon.h"
class GrassPokemon :
	public Pokemon
{
public:
	GrassPokemon();
	~GrassPokemon();
	virtual void normalAttack(Pokemon* target);
	virtual void strongAttack(Pokemon* target);
	virtual void setStrongAttackStaminaCost();
};

