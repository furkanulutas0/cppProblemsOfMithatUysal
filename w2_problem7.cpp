/*
Bir bayağı kesrin pay ve paydasını girerek kesri ondalık sayı olarak hesaplatan bir C++
programı yazınız.
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float x, y; // x,y = x/y

    cout << "Please type first value; ";
    cin >> x;
    cout << "Please tpye seconde value; ";
    cin >> y;

    if (x > y)
    {
        cout << "Please type valid value! - First value must be less than second value.";
    } 
    else
    {
        cout << "Result: " << x/y;
    }
    

    return 0;
}
