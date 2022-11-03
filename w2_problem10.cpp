/*
PROBLEM
Dört işlem(+,-,*,/) yapan hesap makinesı tasarımı (swtich - case kullanarak)
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    int type;
    float x,y,result;
    cout << "Process Type: 1) Sum, 2)Extraction, 3) Multiple, 4) Divide - Plase type to process type: "; cin >> type;
    cout << "Plase type number one: "; cin >> x;
    cout << "Plase type number two: "; cin >> y;
    switch (type)
    {
    case 1: // sum
        result = x+y;
        cout << "Result " << result << endl;
        break;
    case 2: // extraction
        result = x-y;
        cout << "Result " << result << endl;
        break;
    case 3: // multiple
        result = x*y;
        cout << "Result " << result << endl;
        break;
    case 4: // divide
        if (y == 0)
        {
            cout << "seconde number must not equal to 0 for divide";
        }
        else 
        {
            result = x/y;
            cout << "Result " << result << endl;
        }
        
        break;
    default:

        cout << "Please type valid value!" << endl;
        break;
    }
    return 0;
}
