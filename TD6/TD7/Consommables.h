#pragma once
#include <string>

typedef enum {
	LIFE,
	SHIELD,
	BOOST,
	DAMAGE,
	NONE
}Potion_enum;

class Consommables
{
public:
	Consommables();
	Consommables(Potion_enum _type, int _value, std::string _name);

private:
	Potion_enum type;
	int value;
	std::string name;

};

