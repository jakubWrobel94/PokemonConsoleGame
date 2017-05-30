#pragma once
#include "GrassPokemon.h"
class Bulbasaur :
	public GrassPokemon
{
public:
	Bulbasaur();
	Bulbasaur(int MHP, int MSP, int AP, int  DP);
	~Bulbasaur();

	virtual void setName();
	virtual void setNormalAttackName();
	virtual void setStrongAttackName();
	static void bulbasaurCounter();

	static int bulbasaurCount;
};

