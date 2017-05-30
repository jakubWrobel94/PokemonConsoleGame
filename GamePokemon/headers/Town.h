#pragma once
#include "Location.h"
#include"Humanoid.h"
class Town :
	public Location
{
public:
	Town();
	~Town();
	Town(std::string NAME, std::string DESCRIPTION_ADDRESS);

	virtual void showActions(Humanoid * PLAYER) ;
	virtual void chooseAction(Humanoid* PLAYER) ;
};

