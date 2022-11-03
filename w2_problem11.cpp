/*
Bir öğrencinin notu 0-100 arasında bir rakamdır.Not 100 ise harfli olarak A,90-100 arasında
ise A-,80-90 arasında ise B,70-80 arasında ise B-,60-70 arasında ise C,50-60 arasında ise D ve
50’den düşük ise F olacaktır.Buna göre sayısal not girildiğinde harfli notu hesaplayan bir C++
programı yazınız.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int grade;
    cout << "Please type your exam grade: (?/100) "; cin >> grade;
    grade = grade /10;
    switch (grade)
    {
    case 10:
        cout << "Your letter grade : A" << endl;
        break;
    case 9:
        cout << "Your letter grade : A-" << endl;
        break;
    case 8:
        cout << "Your letter grade : B" << endl;
        break;
    case 7:
        cout << "Your letter grade : B-" << endl;
        break;
    case 6:
        cout << "Your letter grade : C" << endl;
        break;
    case 5:
        cout << "Your letter grade : D" << endl;
        break;    
    case 4: case 3: case 2: case 1: case 0:
        cout << "Your letter grade : f" << endl;
        break;   
    default:
        cout << "Please type valid value" << endl;
        break;
    }
    return 0;
}
