#include <iostream>

int main()
{
    int userInteger{0};
    std::cout << "Enter an integer :";
    std::cin >> userInteger;

    if (userInteger>0)
    {
       std::cout << userInteger << " is positive";
    }
    else if (userInteger<0) 
    {
        std::cout << userInteger << " is negative";
    } 
    else 
    {
        std::cout << "is equal to 0";
    }

    return 0;
}