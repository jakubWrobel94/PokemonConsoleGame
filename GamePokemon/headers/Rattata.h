#pragma once
#include "NormalPokemon.h"
class Rattata :
	public NormalPokemon
{
public:
	Rattata();
	Rattata(int MHP, int MSP, int AP, int  DP);
	~Rattata();
	virtual void setName();
	virtual void setNormalAttackName();
	virtual void setStrongAttackName();
	static void rattataCounter();

	static int rattataCount;
};

