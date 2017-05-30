#pragma once
#include "FirePokemon.h"
class Charmander :
	public FirePokemon
{
public:
	Charmander();
	Charmander(int MHP, int MSP, int AP, int  DP);
	~Charmander();

	virtual void setName();
	virtual void setNormalAttackName();
	virtual void setStrongAttackName();
	static void charmanderCounter();

	static int charmanderCount;


};

