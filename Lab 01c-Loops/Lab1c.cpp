#include <iostream>
using namespace std;

// Function 1
void F1_CountingUp()
{
	cout << "F1_CountingUp" << endl;

	int counter = 0;
	
	{
		for (int counter = 0; counter <= 9; counter++)
		{
			cout << counter << endl;
		}

		while (counter <= 9)
		{
			break;
		}
	}
}

// Function 2
void F2_MultiplyUp()
{
	cout << "F2_MultiplyUp" << endl;

	int counter = 1;
	{
		for (int counter = 1; counter < 200; counter = counter * 2)
		{
			cout << counter << endl;

		}
		while (counter >= 200)
		{
			break;
		}

	}
}
// Function 3
void F3_NumberGuesser()
{
    cout << "F3_NumberGuesser" << endl;
	int secretNumber = 44;
	int playerGuess;
	do

	{
		cout << "Please enter a number guess: " << endl;
		cin >> playerGuess;
		if (playerGuess < secretNumber)
		{
			cout << "Too low! ";
		}
		else if (playerGuess > secretNumber)
		{
			cout << "Too high! ";
		}
	
	} 
	while (playerGuess != secretNumber);
	cout << "YOU WIN" << endl;


}

// Function 4
void F4_InputValidator()
{

	int choice;
	cout << "F4_InputValidator" << endl;
	do
	{
		cout << "Please enter a number between 0 and 5. " << endl;
		cin >> choice;
		if (choice < 0 || choice > 5)
		{
			cout << "Invalid entry. Try again: ";
		}
	}
	while (choice < 0 || choice > 5);
	cout << "Thank you" << endl;

}
// Function 5
void F5_GettingARaise()
{
    cout << "F5_GettingARaise" << endl;
	float startingWage; 
	 float percentRaisePerYear;
	float adjustedWage;
	int yearsWorked;
	cout << "Please enter your starting wage." << endl;
		cin >> startingWage;
		cout << "Please enter your percent raise per year." << endl;
		cin >> percentRaisePerYear;
		cout << "Please enter your years worked." << endl;
		cin >> yearsWorked;
		
		adjustedWage = startingWage;
			for (int year = 1; year < yearsWorked; year++)
				
			{
				adjustedWage = adjustedWage + (adjustedWage * percentRaisePerYear);
			
				cout << adjustedWage << endl;
			}
			
		
}

// Function 6
void F6_Summation()
{
    cout << "F6_Summation" << endl;
}
float sum = 0;
for (int n = 1; n <= 10; n++)
{
    cout << "The sum of numbers 1 to 10 is " << sum << endl;
}



/* Don't modify the code below! ****************************************/

int main()
{
    F1_CountingUp();
    cout << endl << endl;

    F2_MultiplyUp();
    cout << endl << endl;

    F3_NumberGuesser();
    cout << endl << endl;

    F4_InputValidator();
    cout << endl << endl;

    F5_GettingARaise();
    cout << endl << endl;

    F6_Summation();
    cout << endl << endl;


    cout << endl << endl;
    while ( true );
    return 0;
}
