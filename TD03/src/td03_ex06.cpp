#include <iostream>

int main()
{
    int saisie;
    std::cout << "Saisir une valeur :" << std::endl;
    std::cin >> saisie;

    int entier_positif {(saisie > 0) ? 1 : 0};
    int entier_pair {(saisie%2==0) ? 1 : 0};

    std::cout << entier_positif << ", " << entier_pair << std::endl;

    return 0;
}