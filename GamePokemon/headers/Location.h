#pragma once
#include<string>
#include<vector>
#include<iostream>
#include"TextPrinter.h"

class Humanoid;
class Pokemon;

class Location
{
public:
	Location();
	~Location();
	Location(std::string NAME, std::string DESCRIPTION_ADDRESS);
	std::vector<Location*> neighborLocations;

	virtual void showActions(Humanoid * PLAYER) = 0;
	virtual void chooseAction(Humanoid* Player) = 0;

	void addPokemon(Pokemon * POKEMON);
	void addEnemy(Humanoid* ENEMY);
	void addNeighborLocation(Location * NEIGHBOR);
	void eraseEnemy();
	void erasePokemon();

	void setName(std::string NAME);
	void setDescriptionAddress(std::string ADDRESS);
	void setHaveEnemies(bool HAVE_ENEMIES);

	std::string getName();
	std::string getDescriptionAddress();
	bool getHaveEnemies();
	Location * chooseLocation();
	void writeDescription();
	Humanoid * getEnemyPointer();

protected:
	std::string name;
	std::string descriptionAddress;
	std::vector<Pokemon*> wildPokemons;
	std::vector<Humanoid*> enemies;
	bool haveEnemies;

};

