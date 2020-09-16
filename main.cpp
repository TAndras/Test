#include <iostream>

#include "Unit.h"

using namespace std;

int main(int argc, char* argv[])
{
	Unit maple("Maple", 150,	10);
	Unit sally("Sally", 45,		30);

	cout << maple;
	cout << sally;

	while (maple.getHealth() > 0 && sally.getHealth() > 0)
	{
		maple.attack(sally);
		if (sally.getHealth() > 0)
		{
			sally.attack(maple);
		}
	}

	return 0;
}


