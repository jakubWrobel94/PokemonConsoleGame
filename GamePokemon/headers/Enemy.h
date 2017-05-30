#pragma once
#include "Humanoid.h"
class Enemy :
	public Humanoid
{
public:
	Enemy();
	Enemy(std::string enemyName);
	virtual Pokemon* choosePokemon();
	virtual bool allPokesAreFainted();
	~Enemy();


};

