#include <iostream>

int main()
{
    int userInteger{0};
    std::cout << "Enter an integer : ";
    std::cin >> userInteger;

    if (userInteger%2 == 0)
    {
       std::cout << userInteger << " is even";
    }
    else 
    {
        std::cout << userInteger << " is odd";
    }

    return 0;
}