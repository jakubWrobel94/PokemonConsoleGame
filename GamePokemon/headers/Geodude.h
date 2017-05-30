#pragma once
#include "RockPokemon.h"
class Geodude :
	public RockPokemon
{
public:
	Geodude();
	Geodude(int MHP, int MSP, int AP, int  DP);
	~Geodude();

	virtual void setName();
	virtual void setNormalAttackName();
	virtual void setStrongAttackName();
	static void geodudeCounter();

	static int geodudeCount;
};

