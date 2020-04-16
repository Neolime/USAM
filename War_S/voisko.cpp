#include "voisko.h"



Voisko::Voisko(int size)
{
	srand(time(NULL));
	for (int i = 0; i< size; i++)
	{
		Soldier soldier;
		soldier.mass = 50 + rand() % 90;
		soldier.height = 160 + rand() % 190;

		army.push_back(soldier);
	}
}

void Voisko::sort(bool por)
{
	for(int i=0; i<army.size()-1;i++)
	{
		for (int j = 0; j < army.size() - j - 1; j++)
		{
			if (army[j].height > army[j+1].height)
			{
				swap(army[j], army[j + 1]);
			}
		}
	}
}

void Voisko::print()
{
	for (int i = 0; i < army.size(); i++)
	{
		cout << "Soldier" << i + 1 << ":height=" << army[i].height << "mass=" << army[i].mass << "\n";
	}
}

void Voisko::sumMass()
{
	int sumMass = 0;
	for(int i=0;i<army.size();i++)
	{
		sumMass += army[i].mass;
	}
	cout << "Summ mass:" << sumMass;
}
