#include <iostream>
#include <string>

using namespace std;

int main()
{
	string ears[3] = { "   ^ ^   ",   "  n   n ",     "  *   *  " };
	string heads[3] = { " ( o_o ) ",   " ( x_x )" ,    " ( >_< ) " };
	string bodies[3] = { "/(     )\\",  "\\(     )/",   "o(     )o" };
	string feet[3] = { "  d   b   ",  "  @   @ ",     "  () () " };

	string * ptrEars;
	string * ptrHead;
	string * ptrBody;
	string * ptrFeet;

	int choice;
	cout << "Enter ears (0 - 2): " << endl;
	cin >> choice;
	ptrEars = &ears[choice];

	cout << "Enter head (0 - 2): " << endl;
	cin >> choice;
	ptrHead = &heads[choice];

	cout << "Enter body (0 - 2): " << endl;
	cin >> choice;
	ptrBody = &bodies[choice];

	cout << "Enter feet (0 - 2): " << endl;
	cin >> choice;
	ptrFeet = &feet[choice];

	if (choice <= 2 && choice >= 0)
	{
		cout << endl << *ptrEars << endl << *ptrHead << endl << *ptrBody << endl << *ptrFeet << endl;
	}


	while (true);
	return 0;
}