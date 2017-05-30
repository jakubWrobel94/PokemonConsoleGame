#include "TextPrinter.h"



TextPrinter::TextPrinter()
{
}


TextPrinter::~TextPrinter()
{
}

void TextPrinter::printDescription(std::string FILE_LOCATION)
{
	std::ifstream file;
	file.open(FILE_LOCATION);
	std::string description;

	if (file.good())
	{

		for (; getline(file, description);)
		{
			std::cout << description << std::endl;;
		}
		std::cout << "=====================================\n";
		file.close();
	}
	else
		throw WrongFileLocation();
}

void TextPrinter::printOptions(std::string OPTION1, std::string OPTION2)
{
	std::cout << "=====================================\n";
	std::cout << "Co chcesz teraz zrobic ?? \n\n";
	std::cout << "1. " << OPTION1 << std::endl;;
	std::cout << "2. " << OPTION2 << std::endl;
}

void TextPrinter::printOptions(std::string OPTION1, std::string OPTION2, std::string OPTION3)
{

	std::cout << "Co chcesz teraz zrobic ?? \n\n";
	std::cout << "1. " << OPTION1 << std::endl;;
	std::cout << "2. " << OPTION2 << std::endl;	
	std::cout << "3. " << OPTION3 << std::endl;
	std::cout << "=====================================\n";
}

void TextPrinter::printPokemonList(Humanoid * PLAYER)
{
	int pokemonNumber = 1;

	std::cout << "Twoja lista Pokemon : \n\n";
	for (auto i : PLAYER->getPokemonList())
	{
		std::cout << pokemonNumber << i->getName() << "\tHP: " << i->getHealthPoints()<<std::endl;
		pokemonNumber++;
	}
	std::cout << "=====================================\n";
}

void TextPrinter::printNeghborLocations(Location * CURRENT_LOCATION)
{
	int locationNumber = 1;

	std::cout << "Sasiednie lokacje : \n\n";
	for (auto i : CURRENT_LOCATION->neighborLocations)
	{
		std::cout << locationNumber << ". " << i->getName() << std::endl;
		locationNumber++;
	}
	std::cout << "=====================================\n";
}

void TextPrinter::printChooseAttack(Pokemon * POKEMON)
{
	std::cout << "=====================================\n";
	std::cout << "Wybierz atak : \n\n";
	std::cout << "1. " << POKEMON->getNormalAttackName() << std::endl;
	std::cout << "2. " << POKEMON->getStrongAttackName() << " (" << POKEMON->getStrongAttackStaminaCost() << " punkty staminy)\n";
	std::cout << "=====================================\n";
}
