#pragma once
#include "NormalPokemon.h"
class Pidgey :
	public NormalPokemon
{
public:
	virtual void setName();
	virtual void setNormalAttackName();
	virtual void setStrongAttackName();
	static void pidgeyCounter();

	static int pidgeyCount;

	Pidgey();
	Pidgey(int MHP, int MSP, int AP, int  DP);
	~Pidgey();
};

