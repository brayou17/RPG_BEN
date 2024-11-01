#include "Personnage.h"
#include "PNJ.h"

Personnage::Personnage() : Personnage("None", 1, 0, 100, 100, 5, 0, "None", NEUTRAL, Vector2f{500.f,500.f})
{}

Personnage::Personnage(std::string _name, int _level, int _skillPoints, float _life, float _stamina, float _speed, float _experience, std::string _alignment, Race _race, Vector2f _pos)
{
	name = _name;
	level = _level;
	life = _life;
	stamina = _stamina;
	speed = _speed;
	alignment = _alignment;
	experience = _experience;
	skillPoints = _skillPoints;
	race = _race;
	pos = _pos;
	isDone = false;
}

Personnage::Personnage(std::string _name) : Personnage(_name, 1, 0, 100, 100, 5, 0, "None", IONIENS, Vector2f{ 500.f,500.f })
{}

float getDistanceBetweenVector(Vector2f _vec1, Vector2f _vec2)
{
	return (_vec2.x - _vec1.x) * (_vec2.x - _vec1.x) + (_vec2.y - _vec1.y) * (_vec2.y - _vec1.y);
}

void discussionPNJ()
{
	std::cout << "Bien joue tu m'as trouve je te donne 100 exp !\n";
	std::cout << "Maintenant continue ton voyage\n";
}

void Personnage::update(PNJ _pnj)
{
	if(getDistanceBetweenVector(pos, _pnj.getPos()) > 1000.f)
	{
		movement();
	}
	else
	{
		discussionPNJ();
		pos.x -= 100.f;
		addExperience(100.f);
		checkEXP();
		displayStat();
	}
}

void Personnage::displayStat()
{
	std::cout << "Name : " << name;
	std::cout << "\n\nLevel : " << level;
	std::cout << "\nStamina : " << stamina;
	std::cout << "\nSpeed : " << speed;
	std::cout << "\nAlignement : " << alignment;
	std::cout << "\nSkillPoints : " << skillPoints;
	std::cout << "\nRace : " << race.getNameRace();
	std::cout << "\nExp : " << experience << std::endl << std::endl;
}

/// <summary>
/// You can change every stat, put "" (string), -1 (int or float) or NONE (race) if you don't want change the value
/// </summary>
/// <param name="_name"></param>
/// <param name="_level"></param>
/// <param name="_skillPoints"></param>
/// <param name="_life"></param>
/// <param name="_stamina"></param>
/// <param name="_speed"></param>
/// <param name="_experience"></param>
/// <param name="_alignment"></param>
/// <param name="_race"></param>
void Personnage::changeStats(std::string _name, int _level, int _skillPoints, float _life, float _stamina, float _speed, float _experience, std::string _alignment, Personnage_Race _race)
{
	if (_name != "") name = _name;
	if (_level != -1) level = _level;
	if (_skillPoints != -1) skillPoints = _skillPoints;
	if (_life != -1) life = _life;
	if (_stamina != -1) stamina = _stamina;
	if (_speed != -1) speed = _speed;
	if (_experience != -1) experience = _experience;
	if (_alignment != "") alignment = _alignment;
	if (_race != NONE) race.setNameRace(_race);
	
}

void Personnage::movement()
{
	int direction = 0;
	float pas = 0.0f;

	std::cout << "Vous etes en x = " << pos.x << "  y " << pos.y << std::endl;
	std::cout << "Si vous voulez vous deplacer choisissez choisissez une direction et un pas\n";
	std::cout << "1 Haut, 2 Bas, 3 Gauche, 4 Droite, 5 Quitter et un pas\n";
	std::cin >> direction >> pas;

	if (direction == 1) pos.y -= pas;
	else if (direction == 2) pos.y += pas;
	else if (direction == 3) pos.x -= pas;
	else if (direction == 4) pos.x += pas;
	else if (direction == 5) isDone = true;
	else
		std::cout << "Veuillez choisir une reponse valide !\n";

	system("pause");
	system("cls");
}

void Personnage::addExperience(float _nb)
{
	experience += _nb;
}

bool Personnage::playerIsDone()
{
	return isDone;
}

float Personnage::getMaxEXPValue()
{
	return (5 * (level + 1)) + ((level * level * level) / 50);
}

void Personnage::checkEXP()
{
	if(level <= 100)
	{
		float cellingExp = getMaxEXPValue();
		if (experience >= cellingExp)
		{
			experience -= cellingExp;
			level++;
		}
	}
	else
	{
		float cellingExp = 22000;
		if (experience >= cellingExp)
		{
			experience -= cellingExp;
			level++;
		}
	}
}


float experienceFunction(int _currentLevel)
{
	return (5 * (1 + 1)) + ((1 * 1 * 1) / 50);
}
