/*
Aşağıdaki işlemi gerçekleştiren bir akış diyagramı oluşturunuz ve ilgili C++
programını yazınız.
 1+2/3+4/5+6/7+……..+400/401
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    double sum, x, y;

    sum = 1;
    x= 2;
    calculate:
    sum = sum + x / (x+1);
    x = x +2;
    if (x <= 400 )
    {

        goto calculate;
    }

    std::cout << sum << std::endl;
    
}
