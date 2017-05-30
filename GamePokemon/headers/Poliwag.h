#pragma once
#include "WaterPokemon.h"
class Poliwag :
	public WaterPokemon
{
public:
	Poliwag();
	Poliwag(int MHP, int MSP, int AP, int  DP);
	~Poliwag();

	virtual void setName();
	virtual void setNormalAttackName();
	virtual void setStrongAttackName();
	 
	static void poliwagCounter();
	static int poliwagCount;
};

