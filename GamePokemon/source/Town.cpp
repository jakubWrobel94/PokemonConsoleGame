#include "Town.h"

Town::Town()
{
}


Town::~Town()
{
}

Town::Town(std::string NAME, std::string DESCRIPTION_ADDRESS)
{
	this->setName(NAME);
	this->setDescriptionAddress(DESCRIPTION_ADDRESS);
}

void Town::showActions(Humanoid * PLAYER)
{
	TextPrinter::printOptions("Idz do kliniki i ulecz swoje Pokemon.\n", "Idz dalej\n", "Zobacz liste swoich Pokemon.\n");
}

void Town::chooseAction(Humanoid * PLAYER)
{
	int actionNumber;
	std::cin >> actionNumber;
	switch (actionNumber)
	{
	case 1:
		for (auto i : PLAYER->getPokemonList())
		{
			i->setHealthPoints(i->getMaxHealth());
			i->awake();
		}
		break;
	case 2:
		PLAYER->setCurrentLocation(PLAYER->getCurrentLocation()->chooseLocation());
		break;
	case 3:
		TextPrinter::printPokemonList(PLAYER);
		break;
	}
}
