/*
Aşağıdaki işlemi gerçekleştiren bir akış diyagramı oluşturunuz ve ilgili C++
programını yazınız.
 1+1/5+1/9+1/13+……..+1/401
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float sum, x, rate;

    sum = 0;
    x = 1;
    rate = 4;
    calculate:
    sum = sum +1 /x;
    x += 4;
    if (x <= 401) {
        goto calculate;
    } else 
    {
        cout << "Result: " << sum;
    }
}
