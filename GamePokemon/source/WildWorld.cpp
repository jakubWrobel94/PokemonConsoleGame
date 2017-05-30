#include "WildWorld.h"



WildWorld::WildWorld()
{
}


WildWorld::~WildWorld()
{
}

WildWorld::WildWorld(std::string NAME, std::string DESCRIPTION)
{
	this->setName(NAME);
	this->setDescriptionAddress(DESCRIPTION);
}

void WildWorld::showActions(Humanoid * PLAYER)
{
	TextPrinter::printOptions("Rozejrzyj sie po okolicy i poszukaj pokemonow.\n", 
		"Idz dalej.\n",
		"Zobacz liste swoich Pokemon. \n");
}

void WildWorld::chooseAction(Humanoid * PLAYER)
{
	if (PLAYER->getCurrentLocation()->getHaveEnemies())
	{
		Humanoid* enemy = PLAYER->getCurrentLocation()->getEnemyPointer();
		std::cout << "\nSpotykasz wrogiego trenera Pokemon - " << enemy->getName() << ". Przygotuj sie do walki.\n\n ";
		PLAYER->fight(enemy);
		showActions(PLAYER);
	}
	int actionNumber;
	std::cin >> actionNumber;
	switch (actionNumber)
	{
	case 1:
		if (this->wildPokemons.empty())
		{
			std::cout << "Nie ma zadnych Pokemon ! \n\n";
			break;
		}
		else
			std::cout << "\nSpotkales " << this->wildPokemons[0]->getName();
			std::cout << ". Sproboj go zlapac !! Wybierz Pokemon do walki :  \n";
			PLAYER->fight(this->wildPokemons[0]);
		break;
	case 2:
		PLAYER->setCurrentLocation(PLAYER->getCurrentLocation()->chooseLocation());
		break;
	case 3:
		
		TextPrinter::printPokemonList(PLAYER);
		break;
	}
}
