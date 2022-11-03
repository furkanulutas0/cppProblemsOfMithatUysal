/*
	y = x^^3 + ((4.dereceden kök) x+2) / x^^5 + ((3. dereceden kök)x+1
	x => klavyeden girilmek üzere
 */

#include <iostream>


using namespace std;

int main()
{
	float x, y, sum;
	y = 0;
	cout << "Type value of X: ";
	cin >> x;

	y = (pow(x, 3) + pow(x + 2, 1.0 / 4)) / (pow(x, 5) + pow(x + 1, 1.0 / 3));

	cout << "Result: " << y << endl;


}


