#include <iostream>

int main()
{
    int saisie;
    std::cout << "Saisir une valeur :" << std::endl;
    std::cin >> saisie;

    if (saisie<0) 
    {
        std::cout << saisie << "est négatif" << std::endl;
    }
    else if (saisie==0) {
        std::cout << saisie << "est nul" << std::endl;
    }
    else
    {
        std::cout << saisie << "est positif" << std::endl;
    }
    
    return 0;
}