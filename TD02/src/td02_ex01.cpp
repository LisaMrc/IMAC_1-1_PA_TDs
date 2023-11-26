#include <iostream>

int main()
{
    int number { 10 };

    std::cout << "Initialisation :" << number << std::endl;

    number++;

    std::cout << "Incrementation de 1 :" << number << std::endl;

    number*=3;

    std::cout << "Multiplication par 3 :" << number << std::endl;

    number/=2;

    std::cout << "Division par 2 :" << number << std::endl;
    
    return 0;
}