#include "Consommables.h"

Consommables::Consommables()
{
	type = LIFE;
	value = 100;
	name = "Potion";
}

Consommables::Consommables(Potion_enum _type, int _value, std::string _name)
{
	type = _type;
	value = _value;
	name = _name;
}
