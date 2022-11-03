/*
Bilgisayara pozitif bir sayı girişini kontrol eden bir C++ kodu yazınız.Kullanıcı pozitif bir
sayı girerse bu görüntülenecek bunun dışında bir sayı girerse de hatası kendisine bildirilecek
ve isterse yeniden sayı girişi yapacaktır.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char Array[10] = {'a', 'b', 'c', 'd', 'e', 'f', '1', '2', '3', '4'};
    int counter = 0;

    for (int i = 0; i < 10; i++)
    {
        switch (Array[i])
        {
        case '1':
            counter += 1;
            break;
        case '2':
            counter += 1;
            break;
        case '3':
            counter += 1;
            break;
        case '4':
            counter += 1;
            break;
        case '5':
            counter += 1;
            break;
        case '6':
            counter += 1;
            break;
        case '7':
            counter += 1;
            break;
        case '8':
            counter += 1;
            break;
        case '9':
            counter += 1;
            break;
        case '0':
            counter += 1;
            break;
        }
        cout << Array[i] << endl;
    }
    cout << "Total Number Amount : " << counter;
    

}
