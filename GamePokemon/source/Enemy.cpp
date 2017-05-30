#include "Enemy.h"
#include<iostream>


Enemy::Enemy()
{
}

Enemy::Enemy(std::string enemyName)
{
	this->setName(enemyName);

}

Pokemon * Enemy::choosePokemon()
{
	Pokemon * strongestPokemon = this->pokemonList[0];
	for (auto i : this->pokemonList)
	{
		if (i->getAttackPoints() >= strongestPokemon->getAttackPoints() && !i->getIsFainted())
		{
			strongestPokemon = i;
		}

	}
	std::cout << "Przeciwnik wybral : " << strongestPokemon->getName() << "\tHP: " << strongestPokemon->getHealthPoints();
	
	return strongestPokemon;
}

bool Enemy::allPokesAreFainted()
{
	bool allPokesAreFainted = true;
	for (auto i : this->pokemonList)
	{
		if (!i->getIsFainted())
		{
			allPokesAreFainted = false;
			break;
		}
	}
	return allPokesAreFainted;
}


Enemy::~Enemy()
{
}

