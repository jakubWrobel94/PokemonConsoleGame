#pragma once
#include "FirePokemon.h"
class Charizard :
	public FirePokemon
{
public:
	Charizard();
	Charizard(int MHP, int MSP, int AP, int  DP);
	~Charizard();

	virtual void setName();
	virtual void setNormalAttackName();
	virtual void setStrongAttackName();
	static void charizardCounter();

	static int charizardCount;
};

