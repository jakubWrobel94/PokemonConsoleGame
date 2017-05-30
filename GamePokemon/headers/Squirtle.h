#pragma once
#include "WaterPokemon.h"
class Squirtle :
	public WaterPokemon
{
public:
	Squirtle();
	Squirtle(int MHP, int MSP, int AP, int  DP);
	~Squirtle();

	virtual void setName();
	virtual void setNormalAttackName();
	virtual void setStrongAttackName();
	static void squirtleCounter();

	static int squirtleCount;
};

