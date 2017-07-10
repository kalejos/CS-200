#include <iostream>
#include <string>
#include <cstdlib>      // for srand and rand
#include <ctime>        // for time
using namespace std;

const int MANAGER_COUNT = 2;
const int EMPLOYEE_COUNT = 5;

string managerNames[MANAGER_COUNT] = { "Kenz", "Riss" };
string employeeNames[EMPLOYEE_COUNT] = { "Sam", "Cam", "Ray", "Rach", "Mark" };
string * employeeManagers[EMPLOYEE_COUNT];

	void AssignManagers(string managerNames[MANAGER_COUNT], string * employeeManagers[EMPLOYEE_COUNT])
	{
		for (int i = 0; i < EMPLOYEE_COUNT; i++)
		{
			int index = rand() % MANAGER_COUNT;
			employeeManagers[i] = &managerNames[index];
		}
	}

	void DisplayEmployees(string employeeNames[EMPLOYEE_COUNT], string * employeeManagers[EMPLOYEE_COUNT])
	{
		for (int i = 0; i < EMPLOYEE_COUNT; i++)
		{
			cout << "Employee " << i << "\t" << employeeNames[i] << "\t Manager: " << *employeeManagers[i] << endl;
		}
	}


int main()
{
	srand(time(NULL));




	while (true);
	return 0;
}