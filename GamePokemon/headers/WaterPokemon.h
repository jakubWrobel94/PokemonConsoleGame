#pragma once
#include "Pokemon.h"
class WaterPokemon :
	public Pokemon
{
public:
	WaterPokemon();
	~WaterPokemon();
	virtual void normalAttack(Pokemon* target);
	virtual void strongAttack(Pokemon* target);
	virtual void setStrongAttackStaminaCost();
};

