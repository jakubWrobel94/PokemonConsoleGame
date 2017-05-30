#pragma once
#include<map>
#include<vector>
#include"Pokemon.h"
#include"Location.h"
#include"TextPrinter.h"

class Pokemon;
class Item;
class Location;

class Humanoid 
{
public:
	Humanoid();
	~Humanoid();

	virtual void setName(std::string NAME);
	virtual Pokemon * choosePokemon() = 0;
	virtual bool allPokesAreFainted() = 0;

	void setCurrentLocation(Location* CURRENT_LOCATION);

	Location* getCurrentLocation();
	std::string getName();
	
	void catchPokemon(Pokemon * target);
	void showPokemonList();
	void fight(Humanoid* TARGET);
	void fight(Pokemon * TARGET);
	
	std::vector<Pokemon*> getPokemonList();
protected: 
	std::string name;
	std::vector<Pokemon*> pokemonList;
	Location * currentLocation;
};

