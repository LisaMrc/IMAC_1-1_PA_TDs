#include <iostream>

int main()
{  
    unsigned int userUnsignedInt{};
    std::cout << "Enter a positive integer : ";
    std::cin >> userUnsignedInt;
    int cpt{1};

    while (userUnsignedInt != 1)
    {
        cpt ++;
        if (userUnsignedInt % 2 == 0)
        {
            userUnsignedInt = userUnsignedInt / 2;
        }
        else
        {
            userUnsignedInt = 3 * userUnsignedInt + 1;
        }
    }

    std::cout << "Il faudra " << cpt << " termes de la suite de Syracuse pour atteindre 1" << std::endl;

    return 0;
}