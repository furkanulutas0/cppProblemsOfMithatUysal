/*
Müze girişleri 12 yaş ve altı çocuklara ve 65 yaşın üstündeki yaşlılara ücretsizdir.Bilgisayara
ziyaretçinin yaşı girildiğinde ücret ödeyip ödemeyeceğini bildiren bir C++ programı yazınız.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int age;

    cout << "Please type value of age: ";
    cin >> age;

    if (age <= 12 || age >= 65) 
    {
        cout << "This visitor does not have to pay" << endl;
    } 
    else
    {
        cout << "This visitor must pay" << endl;
    }

    return 0;

    
}
