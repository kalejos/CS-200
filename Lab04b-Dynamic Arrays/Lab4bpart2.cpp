#include <cstdlib>      // to use rand()
#include <ctime>  
#include <iostream>
#include <string>

using namespace std;

int main()
{
	srand(time(NULL));

	int size;
	cout << "Lotto number count: " << endl;
	cin >> size;

	int* lottoNumbers;
	lottoNumbers = new int[size];
	
	for (int i = 0; i < size; i++)
	{
		lottoNumbers[i] = rand() % 100;
		cout << lottoNumbers[i] << "\t" << endl;
	}
	
	delete[] lottoNumbers;


	while (true);
	return 0;
}