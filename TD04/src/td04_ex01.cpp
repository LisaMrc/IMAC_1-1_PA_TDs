#include <iostream>

int main()
{
    int number{};
    std::cin >> number;
    
    for (int cpt{0}; cpt < number; cpt++)
    {
        if(cpt % 2 == 0) 
        {
            std::cout << cpt << std::endl;
        }
    }

    return 0;
}

/* int main()
{
    int number{};
    std::cin >> number;

    for (int cpt{0}; cpt < number; cpt++)
    {
        if(cpt % 2 == 0)
        {
            continue;
        }
        std::cout << cpt << std::endl;
    }   
    return 0;
} */

/* int main()
{
    int number{};
    std::cin >> number;

    for (int cpt{0}; cpt<number; cpt+=2)
    {
        std::cout << cpt << std::endl;
    }   
} */

/* int main()
{
    int number{};
    std::cin >> number;

    for (int cpt{0}; cpt<number/2; cpt++)
    {
        std::cout << cpt*2 << std::endl;
    }   
} */