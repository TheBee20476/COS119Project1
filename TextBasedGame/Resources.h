#pragma once
#include <iostream>
#include <string>

class Resource
{
public:
	Resource(std::string name, int quantity, int healing) : mName(name), mQuantity(quantity), mHealing(healing)
	{
	}

	int GetHealingAmount()
	{
		return mHealing;
	}


protected:
	std::string mName;
	int mQuantity;
	int mHealing;

};

