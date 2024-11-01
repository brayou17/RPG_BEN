#pragma once
#include <string>

class Armures
{
public:
	Armures();
	Armures(int _pProtection, int _mProtection, std::string _name, float _durability);

private:
	int physicalProtection;
	int magicalProtection;
	std::string name;
	float durability;

};

