#include "Race.h"

Race::Race()
{
	damageBoost = 0;
	speedBoost = 0;
	lifeBoost = 0;
	staminaBoost = 0;
	race = NEUTRAL;
}

Race::Race(Personnage_Race _race, int _damageBoost, int _speedBoost, int _lifeBoost, int staminaBoost)
{
	race = _race;
	damageBoost = _damageBoost;
	speedBoost = _speedBoost;
	lifeBoost = _lifeBoost;
	staminaBoost = staminaBoost;
}

Race::Race(Personnage_Race _race)
{
	damageBoost = 0;
	speedBoost = 0;
	lifeBoost = 0;
	staminaBoost = 0;
	race = _race;
	switch (_race)
	{
	case IONIENS: // attaque
		damageBoost = 10;
		lifeBoost = 10;
		break;
	case DEMACIENS: // mage
		staminaBoost = 10;
		damageBoost = 10;
		break;
	case NOXIENS: // voleur
		speedBoost = 10;
		damageBoost = 5;
		lifeBoost = 5;
		break;
	case FRELJORDAIS: // soin
		staminaBoost = 10;
		lifeBoost = 10;
		break;
	case BILGESOIS: // nain
		damageBoost = 10;
		lifeBoost = 10;
		break;
	case SHURIMA: // elfe
		damageBoost = 5;
		lifeBoost = 5;
		speedBoost = 10;
		break;
	case NEUTRAL:

		break;
	default:
		break;
	}
}

std::string Race::getNameRace()
{
	switch (race)
	{
	case IONIENS: // attaque
		return "Ioniens";
		break;
	case DEMACIENS: // mage
		return "Demaciens";
		break;
	case NOXIENS: // voleur
		return "Noxiens";
		break;
	case FRELJORDAIS: // soin
		return "Freljordais";
		break;
	case BILGESOIS: // nain
		return "Bilgesois";
		break;
	case SHURIMA: // elfe
		return "Shurima";
		break;
	case NEUTRAL:
		return "Neutral";
		break;
	}
}

void Race::setNameRace(Personnage_Race _race)
{
	race = _race;
}
