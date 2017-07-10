#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "What is your hometown?";
	string hometown;
	cin >> hometown;
	hometown.size(); 
	if (hometown.size() > 6)
	{
		cout << "That's a long name! ";
	}
	cout << "What is your name?";
	string name;
	cin >> name;
	
	cout << "Hello " << name << " from " << hometown;

	while (true);
	return 0;

}