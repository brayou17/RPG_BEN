#include "Armures.h"

Armures::Armures()
{
	physicalProtection = 100;
	magicalProtection = 100;
	name = "Shield";
	durability = 50.f;
}

Armures::Armures(int _pProtection, int _mProtection, std::string _name, float _durability)
{
	physicalProtection = _pProtection;
	magicalProtection = _mProtection;
	name = _name;
	durability = _durability;
}
