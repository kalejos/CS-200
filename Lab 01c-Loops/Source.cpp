
#include <iostream>
using namespace std;

int main()
{
	float tsp_baking_powder=1, tsp_baking_soda=0.5, c_butter=1, c_white_sugar=1.5, amount_eggs=1;
	
	float ratio;
	cout << "How many batches do you want to make?" << endl;
	cin >> ratio;

	tsp_baking_soda = (1.0 * ratio);
	tsp_baking_powder = (0.5 * ratio);
	c_butter = (1.0 * ratio);
	c_white_sugar = (1.5 * ratio);
	amount_eggs = (1.0 * ratio);
	
	cout << tsp_baking_soda << " teaspoons of baking soda" << endl;
	cout << tsp_baking_soda << " teaspoons of baking powder" << endl;
	cout << c_butter << " cups of butter" << endl;
	cout << c_white_sugar << " cups of white sugar" << endl;
	cout << amount_eggs << " eggs" << endl;
	
	while (true);
	return 0;
}
