#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Resources.h"

class Player
{
public:
	Player(int health, std::string name, int attack) : mHealth(health), mName(name), mAttack(attack)
	{

	}
	Player(std::string name) : mName(name)
	{
		mHealth = 50;
		mAttack = 5;
	}

	static void PrintStats(Player& player)
	{
		std::cout << "Name: " << player.mName << "\n";
		std::cout << "Health: " << player.mHealth << "\n";
		std::cout << "Attack: " << player.mAttack << "\n";
	}

	std::string GetName()
	{
		return mName;
	}

	static void TrainAttack(Player& player)
	{
		player.mAttack += 5;
	}

protected:

	int mHealth = 50;
	std::string mName = "";
	int mAttack = 5;
	std::vector<Resource> Inventory;

private:

};

