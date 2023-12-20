#include <iostream>

int main()
{
    int variable { 10 };

    std::cout << "Initialisation :" << variable << std::endl;

    variable++;

    std::cout << "Increment of 1 :" << variable << std::endl;

    variable*=3;

    std::cout << "Multiplied by 3 :" << variable << std::endl;

    variable/=2;

    std::cout << "Divided by 2 :" << variable << std::endl;
    
    return 0;
}