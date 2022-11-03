/*
  1+5+9+13+……..401 ifadesinin toplamını if deyimlerini kullanarak bulunuz.
    */

#include <iostream>
using namespace std;

int main()
{
	int increaseRate = 4;
	int x = 1;
	int sum = 0;

	calculate:

	if (x <= 401)
	{
		sum = sum + x;
		x = x + increaseRate;
		goto calculate;
	}
	else
	{
		cout << "Result: " << sum;
	}

}