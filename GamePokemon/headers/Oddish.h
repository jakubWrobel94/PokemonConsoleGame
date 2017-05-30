#pragma once
#include "GrassPokemon.h"
class Oddish :
	public GrassPokemon
{
public:
	Oddish();
	Oddish(int MHP, int MSP, int AP, int  DP);
	~Oddish();

	virtual void setName();
	virtual void setNormalAttackName();
	virtual void setStrongAttackName();
	static void oddishCounter();
	static int oddishCount;
};

