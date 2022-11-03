/*
Bir otomobil kiralama şirketi,kiraladığı otomobiller için ilk 200 kilometreye kadar kilometre
başına 0.5 YTL ücret almakta,200 kilometreden fazla gidişlerde ise 200 kilometreyi aşan
kısımdan km başına 0.2 YTL ücret kesmektedir.
Bilgisayara gidilen km girildiğine göre fatura edilecek hizmet bedelini hesaplayan bir C++
programı yazınız.
*/

#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{

    int km, sum;

    cout << "type km: "; cin >> km;

    if (km < 200)
    {
        sum = km*0.5;
    } 
    else if (km >= 200)
    {
        sum = (200*0.5)+ (km-200)*0.2;
    } else
    {
        cout << "Please type valid value:" << endl;
    }

    cout << "You must pay .." << sum;
    
    
    /* code */
    return 0;
}
