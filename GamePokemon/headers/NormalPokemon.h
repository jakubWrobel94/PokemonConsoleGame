#pragma once
#include "Pokemon.h"
class NormalPokemon :
	public Pokemon
{
public:
	NormalPokemon();
	~NormalPokemon();
	virtual void normalAttack(Pokemon* target);
	virtual void strongAttack(Pokemon* target);
	virtual void setStrongAttackStaminaCost();
};

