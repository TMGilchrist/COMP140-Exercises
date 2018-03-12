#pragma once

#include <iostream>
#include "Attack.h"
#include <map>

class Character
{
public:
	Character()
	{
		health = 100;
	}

	Character(std::string name, int health)
	{
		name = name;
		health = health;
	}

	~Character() {}

	//---------------------------------
	//Getters and setters
	//---------------------------------

	std::string getName()
	{
		return name;
	}

	void setName(std::string newName)
	{
		name = newName;
	}

	int getHealth()
	{
		return health;
	}

	void setHealth(int newHealth)
	{
		health = newHealth;
	}

	void addAttack(std::string attackName, bool isRanged, int damage)
	{
		//attacks.insert()
	}

private:
	std::string name;
	int health;

	std::map<std::string, Attack> attacks;
	
	



protected:


};