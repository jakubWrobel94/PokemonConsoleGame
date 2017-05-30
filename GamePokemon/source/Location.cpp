#include "Location.h"
#include<iostream>
#include<fstream>
#include"WrongFileLocation.h"

Location::Location()
{
}


Location::~Location()
{
}

Location::Location(std::string NAME, std::string DESCRIPTION_ADDRESS)
{
	this->setName(NAME);
	this->setDescriptionAddress(DESCRIPTION_ADDRESS);
	this->setHaveEnemies(false);
}

void Location::addPokemon(Pokemon * POKEMON)
{
	this->wildPokemons.push_back(POKEMON);
}

void Location::addEnemy(Humanoid * ENEMY)
{
	this->enemies.push_back(ENEMY);
	this->setHaveEnemies(true);
}

void Location::setName(std::string NAME)
{
	this->name = NAME;
}

void Location::setDescriptionAddress(std::string ADDRESS)
{
	this->descriptionAddress = ADDRESS;
}

void Location::setHaveEnemies(bool HAVE_ENEMIES)
{
	this->haveEnemies = HAVE_ENEMIES;
}

void Location::addNeighborLocation(Location * NEIGHBOR)
{
	this->neighborLocations.push_back(NEIGHBOR);

}


Location * Location::chooseLocation()
{
	TextPrinter::printNeghborLocations(this);
	std::cout << "Wybierz numer lokacji do ktorej chcesz sie udac : \n";
	int locationNumber;
	while (true)
	{
		std::cin >> locationNumber;
		if (locationNumber >= this->neighborLocations.size() && locationNumber > 0)
		{
			Location * targetLocation = this->neighborLocations[locationNumber - 1];
			return targetLocation;
		}
		std::cout<< "Wybierz jeszcze raz : \n";
	}
	
	return nullptr;
}

void Location::writeDescription()
{
	std::ifstream file;
	file.open(this->descriptionAddress);
	std::string description;
	
	if (file.good())
	{
		for (; getline(file, description);)
		{
			std::cout << description << std::endl;;
		}
		file.close();
	}
	else
		throw WrongFileLocation();
}

Humanoid * Location::getEnemyPointer()
{
	return this->enemies[0];
}

void Location::eraseEnemy()
{
	this->enemies.erase(enemies.begin());
}

void Location::erasePokemon()
{
		this->wildPokemons.erase(wildPokemons.begin());
}

std::string Location::getName()
{
	return this->name;
}

std::string Location::getDescriptionAddress()
{
	return this->descriptionAddress;
}

bool Location::getHaveEnemies()
{
	return this->haveEnemies;
}
