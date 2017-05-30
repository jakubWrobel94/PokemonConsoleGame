#pragma once
#include<string>
#include<iostream>
#include<fstream>
#include"WrongFileLocation.h"
#include"Humanoid.h"
#include"Pokemon.h"
#include<vector>
#include"Humanoid.h"
#include"Location.h"
class Humanoid;
class Location;
class TextPrinter
{
public:
	TextPrinter();
	~TextPrinter();
	static void printDescription(std::string FILE_LOCATION);
	static void printOptions(std::string OPTION1, std::string OPTION2);
	static void printOptions(std::string OPTION1, std::string OPTION2, std::string OPTION3);
	static void printPokemonList(Humanoid * PLAYER);
	static void printNeghborLocations(Location* CURRENT_LOCATION);
	static void printChooseAttack(Pokemon * POKEMON);
};

