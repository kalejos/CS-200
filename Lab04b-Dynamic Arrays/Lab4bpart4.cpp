#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	cout << "Choose a starting point:" << endl
		<< "1. Kansas City" << endl
		<< "2. Seattle" << endl;

	int city;
	cin >> city;
	string place;
	ifstream input;

	if (city == 1)
	{
		input.open("from_kc.txt");
	}
	else
	{
		input.open("from_seattle.txt");
	}

	int locationCount = 0;
	input >> locationCount;
	string * locations = new string[locationCount];
	int * distances = new int[locationCount];
	
	for (int i = 0; i < locationCount; i++)
	{
		input >> locations[i] >> distances[i];
	}

	input.close();

	for (int i = 0; i < locationCount; i++)
	{
		cout << distances[i] << "\t" << "Distance from city selection to " << locations[i] << endl;
	}

	
	while (true);
	return 0;
}