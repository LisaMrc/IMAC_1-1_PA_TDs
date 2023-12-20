#include <iostream>

int main()
{
    int entry{};
    std::cout << "Enter a number between 1 and 26 :";
    std::cin >> entry;

    char letter{static_cast<char>(entry + 64)};
    std::cout << "The corresponding letter is :" << letter << std::endl;

    return 0;
}