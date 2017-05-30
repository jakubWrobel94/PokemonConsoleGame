#pragma once
#include "Location.h"
#include<vector>
#include"Pokemon.h"
#include"Humanoid.h"
#include"Enemy.h"

class WildWorld :
	public Location
{
public:
	WildWorld();
	~WildWorld();
	WildWorld(std::string NAME, std::string DESCRIPTION);

	virtual void showActions(Humanoid * PLAYER);
	virtual void chooseAction(Humanoid * PLAYER);

	

private:


};

