#pragma once
#include"Bulbasaur.h"
#include"Charizard.h"
#include"Charmander.h"
#include"Enemy.h"
#include"FirePokemon.h"
#include"Geodude.h"
#include"GrassPokemon.h"
#include"Humanoid.h"
#include"Location.h"
#include"NormalPokemon.h"
#include"Oddish.h"
#include"Onyx.h"
#include"Pidgey.h"
#include"Player.h"
#include"Pokemon.h"
#include"Poliwag.h"
#include"Rattata.h"
#include"RockPokemon.h"
#include"Squirtle.h"
#include"Town.h"
#include"WaterPokemon.h"
#include"WildWorld.h"
#include"TextPrinter.h"
#include"TooManyPokemons.h"
#include<vector>

class Game
{
public:
	Game();
	~Game();
	std::vector<Location*> locations;
	Humanoid * player;
	bool wonGame;

	void choosePlayerName();
	void writeStartText(std::string TEXT_LOCATION);
	void setLocations();
	void setLocationsConnections();
	void addPokemons();
	void chooseStartPokemon();
	void startGame();
	bool checkIfWon();


};

