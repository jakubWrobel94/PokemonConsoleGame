#include "Game.h"
#include<fstream>


Game::Game()
{
	setLocations();
	setLocationsConnections();
	try
	{
		addPokemons();
	}
	catch (TooManyPokemons)
	{
		std::cout << "Za duzo pokemonow jednego typu !!! \n \n \n";
	}
	player = new Player;
	player->setCurrentLocation(locations.at(0));
	wonGame = false;
}


Game::~Game()
{
}

void Game::choosePlayerName()
{
	std::cout << "\nWitaj trenerze Pokemon. Jak sie nazywasz ?\n";
	std::string yourName;
	std::cin >> yourName;
	player->setName(yourName);
}

void Game::writeStartText(std::string TEXT_LOCATION)
{
		std::cout << "Witaj " << player->getName();
		TextPrinter::printDescription(TEXT_LOCATION);

}

void Game::setLocations()
{
	this->locations.push_back(new Town("Laboratorium Profesora Oaka", "textFiles\\loc1.txt"));
	this->locations.push_back(new WildWorld("Droga do lasu", "textFiles\\loc2.txt"));
	this->locations.push_back(new WildWorld("Las", "textFiles\\loc3.txt"));
	this->locations.push_back(new WildWorld("Polana", "textFiles\\loc4.txt"));
	this->locations.push_back(new Town("Celadon City", "textFiles\\loc5.txt"));
	this->locations.push_back(new WildWorld("Jezioro", "textFiles\\loc6.txt"));
	this->locations.push_back(new WildWorld("Jaskinia", "textFiles\\loc7.txt"));
	this->locations.push_back(new WildWorld("Opuszczony kamieniolom", "textFiles\\loc8.txt"));
	this->locations.push_back(new Town("Lavender Town", "textFiles\\loc9.txt"));
	this->locations.push_back(new WildWorld("Droga do wulkanu", "textFiles\\loc10.txt"));
	this->locations.push_back(new WildWorld("Podnoza wulkanu", "textFiles\\loc11.txt"));
}

void Game::setLocationsConnections()
{
	this->locations.at(0)->addNeighborLocation(this->locations.at(1));
	this->locations.at(1)->addNeighborLocation(this->locations.at(0));

	this->locations.at(1)->addNeighborLocation(this->locations.at(2));
	this->locations.at(2)->addNeighborLocation(this->locations.at(1));

	this->locations.at(2)->addNeighborLocation(this->locations.at(3));
	this->locations.at(3)->addNeighborLocation(this->locations.at(2));

	this->locations.at(3)->addNeighborLocation(this->locations.at(4));
	this->locations.at(4)->addNeighborLocation(this->locations.at(3));

	this->locations.at(4)->addNeighborLocation(this->locations.at(5));
	this->locations.at(5)->addNeighborLocation(this->locations.at(4));

	this->locations.at(5)->addNeighborLocation(this->locations.at(6));
	this->locations.at(6)->addNeighborLocation(this->locations.at(5));
	this->locations.at(5)->addNeighborLocation(this->locations.at(7));
	this->locations.at(7)->addNeighborLocation(this->locations.at(5));

	this->locations.at(7)->addNeighborLocation(this->locations.at(8));
	this->locations.at(8)->addNeighborLocation(this->locations.at(7));

	this->locations.at(8)->addNeighborLocation(this->locations.at(9));
	this->locations.at(9)->addNeighborLocation(this->locations.at(8));

	this->locations.at(9)->addNeighborLocation(this->locations.at(10));
	this->locations.at(10)->addNeighborLocation(this->locations.at(9));
}

void Game::addPokemons()
{
	Pokemon * pidgey = new Pidgey(50, 8, 10, 3);
	Pokemon * oddish = new Oddish(60, 8, 15, 4);
	locations.at(1)->addPokemon(pidgey);
	locations.at(1)->addPokemon(oddish);

	Pokemon * rattata = new Rattata(70, 18, 12, 4);
	locations.at(2)->addPokemon(rattata);

	Pokemon * rattata2 = new Rattata(80, 10, 14, 4);
	Pokemon * poliwag = new Poliwag(80, 10, 15, 4);
	Humanoid * enemy1 = new Enemy("Andrzej");
	enemy1->catchPokemon(rattata2);
	enemy1->catchPokemon(poliwag);
	locations.at(3)->addEnemy(enemy1);

	Pokemon * squirtle = new Squirtle(100, 10, 20, 5);
	locations.at(5)->addPokemon(squirtle);

	Pokemon * onyx = new Onyx(120, 10, 20, 7);
	locations.at(6)->addPokemon(onyx);

	Pokemon* pidgey2 = new Pidgey(100, 10, 13, 3);
	//Pokemon* pidgey3 = new Pidgey(100, 10, 13, 3);
	//Pokemon* pidgey4 = new Pidgey(100, 10, 13, 3);
	//Pokemon* pidgey5 = new Pidgey(100, 10, 13, 3);
	//Pokemon* pidgey6 = new Pidgey(100, 10, 13, 3);
	//Pokemon* pidgey7 = new Pidgey(100, 10, 13, 3);
	Pokemon* bulbasaur = new Bulbasaur(110, 10, 17, 4);
	Pokemon* geodude = new Geodude(120, 10, 17, 5);
	Humanoid* enemy2 = new Enemy("Jurek");
	enemy2->catchPokemon(pidgey2);
	enemy2->catchPokemon(bulbasaur);
	enemy2->catchPokemon(geodude);
	locations.at(7)->addEnemy(enemy2);

	Pokemon * charmander = new Charmander(140, 10, 22, 5);
	locations.at(9)->addPokemon(charmander);

	Pokemon * onyx2 = new Onyx(120, 10, 20, 8);
	Pokemon * squirtle2 = new Squirtle(120, 10, 22, 4);
	Pokemon * charizard = new Charizard(150, 10, 25, 6);
	Humanoid* enemy3 = new Enemy("Zespol R");
	enemy3->catchPokemon(onyx2);
	enemy3->catchPokemon(squirtle2);
	enemy3->catchPokemon(charizard);
	locations.at(10)->addEnemy(enemy3);


}

void Game::chooseStartPokemon()
{
	std::cout << "Wybierz startowego Pokemona : \n1.Bulbasaur\n2.Squirtle\n3.Charmander";
	int yourChoose;
	while (true)
	{
		std::cin >> yourChoose;
		if (yourChoose > 0 && yourChoose <= 3)
		{
			switch (yourChoose)
			{
			case 1:
			{
				Pokemon * bulbasaur = new Bulbasaur(100, 10, 15, 5);
				player->catchPokemon(bulbasaur);
				break;
			}
			case 2:
			{
				Pokemon * squirtle = new Squirtle(100, 10, 15, 7);
				player->catchPokemon(squirtle);
				break;
			}
			case 3:
			{
				Pokemon * charmander = new Charmander(100, 10, 15, 5);
				player->catchPokemon(charmander);
				break;
			}
			
			}
			break;
		}
		std::cout << "Wybierz jeszcze raz ! \n\n";
		
	}
}

void Game::startGame()
{

		this->choosePlayerName();
		this->writeStartText("textFiles\\startText.txt");
		chooseStartPokemon();
		while (true)
		{

			player->getCurrentLocation()->showActions(player);
			player->getCurrentLocation()->chooseAction(player);
			if (checkIfWon() == true)
			{
				break;
			}
		}
	
}

bool Game::checkIfWon()
{
	if (locations.at(10)->getHaveEnemies() == false)
	{
		this->wonGame = true;
		std::cout << "Gratulacje uratowales pobliskich mieszkancow przed zlem ! \n\n";
	}
	return this->wonGame;
}

