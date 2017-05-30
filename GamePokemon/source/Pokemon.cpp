#include "Pokemon.h"
#include<random>
#include<iostream>

Pokemon::Pokemon()
{
}


Pokemon::~Pokemon()
{
}

int Pokemon::randomDamageGenerator(int minDamage, int maxDamage)
{
	std::random_device rd;
	std::uniform_real_distribution<> generator(minDamage,maxDamage);
	return generator(rd);
}

void Pokemon::setMaxHealth(int mhp)
{
	this->maxHealth = mhp;
}

void Pokemon::setMaxStamina(int msp)
{
	this->maxStamina = msp;
}

void Pokemon::setHealthPoints(int hp)
{
	this->healthPoints = hp;
}

void Pokemon::setAttackPoints(int ap)
{
	this->attackPoints = ap;
}

void Pokemon::setDefensePoints(int dp)
{
	this->defensePoints = dp;
}

void Pokemon::setStaminaPoints(int sp)
{
	this->staminaPoints = sp;
}

void Pokemon::faint()
{
	isFainted = true;
	setHealthPoints(0);
}

void Pokemon::awake()
{
	isFainted = false;
}

void Pokemon::checkHP()
{
	if (this->healthPoints <= 0)
		this->faint();
}

bool Pokemon::getIsFainted()
{
	return this->isFainted;
}

void Pokemon::showStamina()
{
	std::cout << "Twoja stamina : ";
	for (int i = 0; i < this->staminaPoints; i++)
	{
		std::cout << "O";
	}
	std::cout << std::endl;
}

std::string Pokemon::getName()
{
	return this->name;
}

int Pokemon::getMaxHealth()
{
	return this->maxHealth;
}

int Pokemon::getMaxStamina()
{
	return this->maxStamina;
}

int Pokemon::getHealthPoints()
{
	return this->healthPoints;
}

int Pokemon::getAttackPoints()
{
	return this->attackPoints;
}

int Pokemon::getDefensePoints()
{
	return this->defensePoints;
}

int Pokemon::getStaminaPoints()
{
	return this->staminaPoints;
}

int Pokemon::getStrongAttackStaminaCost()
{
	return strongAttackStaminaCost;
}

std::string Pokemon::getNormalAttackName()
{
	return this->normalAttackName;
}

std::string Pokemon::getStrongAttackName()
{
	return this->strongAttackName;
}

void Pokemon::increaseHealthPoints(int dhp)
{
	
	this->healthPoints += dhp;
	if (this->healthPoints > this->maxHealth)
		this->setHealthPoints(this->getMaxHealth());

}

void Pokemon::decreaseHealthPoints(int dhp)
{
	this->healthPoints -= dhp;
	if (this->healthPoints < 0)
		this->setHealthPoints(0);
}

void Pokemon::increaseStaminaPoints(int dsp)
{
	this->staminaPoints += dsp;
	if (this->staminaPoints > this->maxStamina)
		this->setStaminaPoints(this->getMaxStamina());
}

void Pokemon::decreaseStaminaPoints(int dsp)
{
	this->staminaPoints -= dsp;
	if (this->staminaPoints < 0)
		this->setStaminaPoints(0);
}

void Pokemon::fight(Pokemon * target)
{
	Pokemon* winner;
	Pokemon* looser;
	while (true)
	{
		this->attack(target);
		target->checkHP();
		if (target->getIsFainted())
		{
			winner = this;
			looser = target;
			break;
		}
		target->computerAttack(this);
		this->checkHP();
		if (this->getIsFainted())
		{
			winner = target;
			looser = this;
			break;
		}
		std::cout << this->getName() << " (Ty) : " << this->getHealthPoints() << "HP \t"
			<< target->getName() << " (wrog) : " << target->getHealthPoints() << "HP" << std::endl;
		this->showStamina();
	}
	looser->faint();
	std::cout << "Wygral " << winner->getName() << " !! " << std::endl;
}

void Pokemon::attack(Pokemon * target)
{
	TextPrinter::printChooseAttack(this);
	bool attackIsChoosen = false;
	while (!attackIsChoosen)
	{
		int whichAttack;
		std::cin >> whichAttack;
		switch (whichAttack)
		{
		case 1:
			std::cout << "Wybrales : " << this->normalAttackName << std::endl;
			this->normalAttack(target);


			attackIsChoosen = true;
			break;
		case 2:
			if (this->getStaminaPoints() < this->getStrongAttackStaminaCost())
			{
				std::cout << "Nie masz wystarczajaco duzo staminy ! " << std::endl;
				break;
			}

			std::cout << "Wybrales : " << this->strongAttackName << std::endl;
			this->strongAttack(target);
			attackIsChoosen = true;
			break;
		default:
			break;
		}

	}
}

void Pokemon::computerAttack(Pokemon * target)
{
	std::cout << "Przeciwnik atakuje !!\n";
	if (this->getStrongAttackStaminaCost() <= this->getStaminaPoints())
	{
		std::cout << "Uzywa : " << this->strongAttackName << std::endl;
		this->strongAttack(target);
	}
	else
	{
		std::cout << "Uzywa : " << this->normalAttackName << std::endl;
		this->normalAttack(target);

	}
}