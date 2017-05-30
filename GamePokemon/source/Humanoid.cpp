#include "Humanoid.h"
#include<iostream>
#include"WrongFileLocation.h"
Humanoid::Humanoid()
{
}

Humanoid::~Humanoid()
{
}

void Humanoid::catchPokemon(Pokemon * target)
{
	this->pokemonList.push_back(target);
	target->setHealthPoints(target->getMaxHealth());
}

void Humanoid::showPokemonList()
{
	int pokeNumber = 1;
	std::cout << "Lista Pokemon : \n\n";
	for (auto i: this->pokemonList)
	{
		std::cout <<pokeNumber<<"."<<i->getName() << "\tHP: " << i->getHealthPoints() << "\n";
		pokeNumber++;
	}
}

void Humanoid::fight(Humanoid * TARGET)
{
	while (true)
	{
		Pokemon* yourPoke=this->choosePokemon();
		Pokemon* targetPoke=TARGET->choosePokemon();
		yourPoke->fight(targetPoke);
		if (this->allPokesAreFainted())
		{
			std::cout << "Przegrales !\n\n ";
			break;
		}
		if (TARGET->allPokesAreFainted())
		{
			std::cout << "Wygrales !\n\n";
			this->getCurrentLocation()->setHaveEnemies(false);
			//delete TARGET;
			break;
		}
	}
}

void Humanoid::fight(Pokemon * TARGET)
{
	while (true)
	{
		Pokemon* yourPoke = this->choosePokemon();
		yourPoke->fight(TARGET);
		if (this->allPokesAreFainted())
		{
			std::cout << "Przegrales !\n ";
			break;
		}
		if (TARGET->getIsFainted())
		{
			std::cout << "Wygrales !\n\n";
			std::cout << "Czy chcesz zlapac pokonanego Pokemon ?? \n\n";
			std::cout << "1. TAK\t 2.NIE";
			int yourChoose;
			std::cin >> yourChoose;
			switch (yourChoose)
			{
			case 2:
			{
				this->currentLocation->erasePokemon();
				break;
			}
			default:
			{
				this->catchPokemon(TARGET);
				this->currentLocation->erasePokemon();
				TARGET->setHealthPoints(TARGET->getMaxHealth());
				TARGET->awake();
				TARGET = nullptr;
				break;
			}
			}
			break;
		}
	}
}

std::vector<Pokemon*> Humanoid::getPokemonList()
{
	return this->pokemonList;
}

void Humanoid::setCurrentLocation(Location * CURRENT_LOCATION)
{
	this->currentLocation = CURRENT_LOCATION;
	try
	{
		TextPrinter::printDescription(CURRENT_LOCATION->getDescriptionAddress());
	}
	catch (WrongFileLocation)
	{
		std::cout << "Sciezka : " << CURRENT_LOCATION->getDescriptionAddress() << " jest niepoprawna !!! \n\n";
	}
}

Location * Humanoid::getCurrentLocation()
{
	return this->currentLocation;
}

std::string Humanoid::getName()
{
	return this->name;
}

void Humanoid::setName(std::string NAME)
{
	this->name = NAME;
}

