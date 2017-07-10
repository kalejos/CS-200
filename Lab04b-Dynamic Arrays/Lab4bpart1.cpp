#include <iostream>
#include <string>

using namespace std;

int main()
{
	int* myInt = nullptr;
	myInt = new int;
	string* myStr = nullptr;
	myStr = new string;
	float* myFloat = nullptr;
	myFloat = new float;

	(*myInt) = 20;
	(*myStr) = "Kylie";
	(*myFloat) = 199.99;

	cout << (*myInt) 
		<< "\t" << (*myStr) 
		<< "\t" << (*myFloat) << endl;

	delete myInt;
	delete myStr;
	delete myFloat;



	while (true);
	return 0;

}