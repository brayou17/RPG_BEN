#include "Armes.h"

Armes::Armes()
{
	physicalDamage = 100;
	magicDamage = 100;
	name = "Sword";
	criticalChance = 10.f;
}

Armes::Armes(int _pDamage, int _mDamage, std::string _name, float _cChance)
{
	physicalDamage = _pDamage;
	magicDamage = _mDamage;
	name = _name;
	criticalChance = _cChance;
}
