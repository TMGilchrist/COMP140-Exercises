#pragma once

#include <iostream>

class Attack
{
public:
	Attack() {}

	Attack(std::string name, bool isRanged, int damage) 
	{
		name = name;
		isRanged = isRanged;
		damage = damage;
	}

	~Attack() {}


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

	bool getIsRanged()
	{
		return isRanged;
	}

	void setIsRanged(bool newRange)
	{
		isRanged = newRange;
	}

	int getDamage() 
	{
		return damage;
	}

	void setDamage(int newDamage) 
	{
		damage = newDamage;
	}


private:
	std::string name;

	bool isRanged;
	int damage;

	
protected:

};
