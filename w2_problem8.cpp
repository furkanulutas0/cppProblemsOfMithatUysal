/*
Bilgisayara girilen iki farklı sayıdan küçük olanını bulan ve listeleyen bir program yazınız.
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x, y, less;
    cout << "Please type two different number: " << endl;
    cin >> x >> y;

    if (x < y)
    {
        less = x;
    } else if (x > y) 
    {
        less = y;
    } else 
    {
        cout << "This number is equal to each other.";
    }
    cout << "The smallest number is: " << less;
    
    return 0;
}
