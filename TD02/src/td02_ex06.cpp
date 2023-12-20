#include <iostream>

int main()
{
    int potatoBags{};
    int carrots{};
    int salads{};

    std::cout << "Enter number of potato bags: ";
    std::cin >> potatoBags;

    std::cout << "Enter number of carrots : ";
    std::cin >> carrots;

    std::cout << "Enter number of salads : ";
    std::cin >> salads;

    std::cout << "The order price is : " << potatoBags*2*1.5 + carrots*(150*2.5/1000) + salads*1.2;

    return 0;
}