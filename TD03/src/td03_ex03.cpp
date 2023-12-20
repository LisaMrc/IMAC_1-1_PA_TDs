#include <iostream>

int main()
{
    int userAge{0};
    std::cout << "Enter your age : ";
    std::cin >> userAge;

    if (std::cin.fail() || userAge < 0) 
    {
        std::cout << "Error : you either entered a negative age or letters";
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }
    else if (userAge < 18) 
    {
        std::cout << "Minor user";
    }
    else 
    {
        std::cout << "Adult user";
    }

    return 0;
}