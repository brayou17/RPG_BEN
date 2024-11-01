#pragma once
#include <string>

class Armes
{
public:
	Armes();
	Armes(int _pDamage, int _mDamage, std::string _name, float _cChance);

private:
	int physicalDamage;
	int magicDamage;
	std::string name;
	float criticalChance;
};

