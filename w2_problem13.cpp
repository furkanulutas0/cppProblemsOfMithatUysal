/*
Bilgisayara girilen sayıların toplamını bulan ve kaç adet sayı girildiğini izleyen ve yazdıran
bir C++ programı yazınız.Sayı girişi negatif sayı ile durdurulacaktır.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int counter, x, sum;
    bool key = true;
    sum = 0;
    counter = 0;
    while (key == true)
    {
        cout << "Please type a number "; cin >> x;
        if (x >0)
        {
            sum += x;
            counter++;
        } else
        {
            cout << "Negatif sayi girildigi icin program durdurulu." << endl;
            key = false;  
        }
        
    }   
    cout << "Girilen pozitif sayi sayisi: " << counter << endl;
    cout << "Girilen pozitif sayilarin toplami: " << sum << endl;
    
    return 0;
}
