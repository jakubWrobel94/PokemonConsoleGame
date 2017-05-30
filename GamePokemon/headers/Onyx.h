#pragma once
#include "RockPokemon.h"
class Onyx :
	public RockPokemon
{
public:
	Onyx();
	Onyx(int MHP, int MSP, int AP, int  DP);
	~Onyx();

	virtual void setName();
	virtual void setNormalAttackName();
	virtual void setStrongAttackName();
	static void onyxCounter();

	static int onyxCount;
};

