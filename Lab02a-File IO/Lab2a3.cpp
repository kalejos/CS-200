#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream input;
	input.open("story.txt");



	// TODO: Create an ifstream variable named "input"

	// TODO: Open the story.txt file

	string line;

	while (getline(input, line))   // Keep reading in lines of text
	{
		cout << line << endl;   // Display text to the screen
	}

	// TODO: Close the input file
	input.close();
	while (true);
	return 0;
}