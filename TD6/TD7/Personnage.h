#pragma once
#include <iostream>
#include <string>
#include "Race.h"
#include "PNJ.h"
#include "tools.h"


class Personnage
{
public:
	Personnage();
	Personnage(std::string _name, int _level, int _skillPoints,float _life, float _stamina, float _speed, float _experience, std::string _alignment, Race _race, Vector2f _pos);
	Personnage(std::string _name);

	void update(PNJ _pnj);

	void displayStat();
	void changeStats(std::string _name, int _level, int _skillPoints, float _life, float _stamina, float _speed, float _experience, std::string _alignment, Personnage_Race _race);
	void movement();


	void addExperience(float _nb);
	bool playerIsDone();

private:

	float getMaxEXPValue();
	void checkEXP();

	std::string name;
	int level;
	int skillPoints;
	Vector2f pos;
	float life;
	float stamina;
	float speed;
	float experience;
	std::string alignment;
	Race race;
	bool isDone;
};

