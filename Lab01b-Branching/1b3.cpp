#include <iostream>
#include <string>
using namespace std;

int main()
{
	float charge;
		cout << "What is your current battery charge? % ";
		cin >> charge;
	if (charge <= 100 && charge > 75)
	{
		cout << "[****]";
	}
	else if (charge <= 75 && charge > 50)
	{
		cout << "[*** ]";
	}
	else if (charge <= 50 && charge > 25)
	{
		cout << "[**  ]";
	}
	else if (charge <= 50 && charge > 0)
	{
		cout << "[*   ]";
	}

	while (true);
	return 0;
}