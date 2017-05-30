#pragma once
#include "Humanoid.h"
class Enemy;
class Player :
	public Humanoid
{
public:
	
	virtual Pokemon * choosePokemon();
	virtual bool allPokesAreFainted();
	Player();
	~Player();
};

