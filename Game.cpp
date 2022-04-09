#include "Game.h"
#include "includes.h"

int options()
{
	std::cout << "What would you like to do?\n";
	std::cout << "1. Display Stats\n2. Loot the near by area\n3. Run North\n4. Run South\n5. Run East\n 6. Run West";

	return 0;
}


int spawn()
{
	int choice = 0;

	std::cout << "DayZ the Experience." << "\n";

	std::cout << "Where would you like to spawn? " << "\n\n";
	std::cout << "1. Berzino\n2. Chernogorsk\n3. Wilderness\n4. Sevrograd\n";

	std::cin >> choice;

	switch (choice)
	{
	case 1:

		std::cout << "You spawn in Berzino, the sun is to the east and there is sea in the air. This is quite a medium sized town, what will you do?\n";

		options();


		break;

	case 2:
		break;

	case 3:
		break;

	case 4:
		break;
	}
	std::cout << choice << "\n";

	system("PAUSE");
	return 0;
}