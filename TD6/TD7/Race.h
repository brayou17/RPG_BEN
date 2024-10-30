#pragma once
#include <iostream>

typedef enum {
	IONIENS, // attaquant
	DEMACIENS, // mage
	NOXIENS, // voleur
	FRELJORDAIS, // soin
	BILGESOIS, // nain
	SHURIMA, //elfe
	NEUTRAL,
	NONE
}Personnage_Race;

typedef enum {
	PERCER,
	SORCELLERIE,
	BOOST,
	SOINX,
	ATTAQUEZONE,
	SAIGNEMENT,

}Personnage_ActCompetence;

typedef enum {


	VOL_OR,


	CHARISMATIQUE,
}Personnage_PasCompetence;


class Race
{
public:

	Race();
	Race(Personnage_Race _race, int _damageBoost, int _speedBoost, int _lifeBoost, int staminaBoost);
	Race(Personnage_Race _race);


	std::string getNameRace();

	void setNameRace(Personnage_Race _race);
private:

	Personnage_Race race;
	int damageBoost;
	int speedBoost;
	int lifeBoost;
	int staminaBoost;
};


