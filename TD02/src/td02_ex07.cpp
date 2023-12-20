#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

int main()
{
    int a{5};
    int b{8};
    float c{M_PI*3};

    b+=20;
    a*=15;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    return 0;
}