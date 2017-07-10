#include <iostream>
using namespace std;

int main()
{
	float score, points;
	

		cout << "What was your score? ";
		cin >> score;
		cout << "What was the total points? ";
		cin >> points;
		float percent = (score / points * 100);
		cout << "Percent: " << percent;

		if (percent > 70)
		{
			cout << " PASS";
		}
		else if (percent <= 70)
		{
			cout << " FAIL";
		}
		while (true);
		return 0;
}