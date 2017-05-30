#include "Player.h"
#include<iostream>



Pokemon * Player::choosePokemon()
{
	TextPrinter::printPokemonList(this);
	std::cout << "\nKtorego Pokemona chcesz wybrac do walki ??\t\n\n";
	int choice;
	while (true)
	{
		std::cin >> choice;
		if (choice <= pokemonList.size() && 0 < choice && !this->pokemonList[choice - 1]->getIsFainted())
		{
			Pokemon* choosenPokemon = this->pokemonList[choice - 1];
			return choosenPokemon;
		}
		std::cout<<"Wybierz jeszcze raz !\n\n";
	}	
}

bool Player::allPokesAreFainted()
{
	for (auto i : this->pokemonList)
	{
		if (!i->getIsFainted())
		{
			return false;
		}
	}
	std::cout << "Wszystkie Pokemony sa zemdlone. Nie mozesz walczyc ... \n";
	return true;
}

Player::Player()
{
}


Player::~Player()
{
}
