/*A
şağıdaki işlemi gerçekleştiren bir akış diyagramı oluşturunuz ve ilgili C++
programını yazınız.
 1-5+9-13+……..401
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double sum, rate, x, converter;
    x = 1;
    rate = 4;
    sum = 0;
    converter = 1;
    
    calculate:
    if (x <= 401)
    {
        sum = sum +x *converter;
        x = x + rate;
        converter = -converter;
        goto calculate;
    } 
    else 
    {
        cout << "Result: " << sum << endl;
    }
    
    return 0;
}
