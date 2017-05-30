#pragma once
#include<string>
#include"TextPrinter.h"
#include"TooManyPokemons.h"
class Pokemon 
{
public:
	Pokemon();
	~Pokemon();
	virtual void strongAttack(Pokemon* target) = 0;
	virtual void normalAttack(Pokemon* target) = 0;
	void fight(Pokemon * target);
	void attack(Pokemon * target);
	
	int randomDamageGenerator(int minDamage,int maxDamage);

	virtual void setName() = 0;
	virtual void setNormalAttackName() = 0;
	virtual void setStrongAttackName() = 0;
	virtual void setStrongAttackStaminaCost() = 0;
	void computerAttack(Pokemon * target);

	void setMaxHealth(int mhp);
	void setMaxStamina(int msp);
	void setHealthPoints(int hp);
	void setAttackPoints(int ap);
	void setDefensePoints(int dp);
	void setStaminaPoints(int sp);
	void faint();
	void awake();
	void checkHP();
	bool getIsFainted();
	void showStamina();
	


	std::string getName();
	int getMaxHealth();
	int getMaxStamina();
	int getHealthPoints();
	int getAttackPoints();
	int getDefensePoints();
	int getStaminaPoints();
	int getStrongAttackStaminaCost();
	std::string getNormalAttackName();
	std::string getStrongAttackName();

	void increaseHealthPoints(int dhp);
	void decreaseHealthPoints(int dhp);
	void increaseStaminaPoints(int dsp);
	void decreaseStaminaPoints(int dsp);

protected:
	std::string name;
	int maxHealth;
	int maxStamina;
	int healthPoints;
	int attackPoints;
	int defensePoints;
	int staminaPoints;
	bool isFainted;
	int strongAttackStaminaCost;
	static int pokemonCount;

	std::string normalAttackName;
	std::string strongAttackName;
};

