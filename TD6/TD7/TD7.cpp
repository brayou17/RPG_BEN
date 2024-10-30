#include <iostream>
#include "Personnage.h"
#include "PNJ.h"

int main()
{
	Personnage bryan("Bryan");
	PNJ pnj;
	/*for (int i = 0; i < 20; i++)
	{
	bryan.update();
	bryan.displayStat();
	bryan.addExperience(5.f);
	}

	std::cout << "\n\n";
	bryan.changeStats("Boby",1,15,1047,10.f,-1,-1,"",NONE);
	bryan.displayStat();*/

	while (!bryan.playerIsDone())
	{
		bryan.update(pnj);
	}

}
