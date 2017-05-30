#include"Game.h"
int main()
{
	Bulbasaur::bulbasaurCount = 0;
	Charizard::charizardCount = 0;
	Charmander::charmanderCount = 0;
	Geodude::geodudeCount = 0;
	Oddish::oddishCount = 0;
	Onyx::onyxCount = 0;
	Game *gra = new Game();
	gra->startGame();
	return 0;
}