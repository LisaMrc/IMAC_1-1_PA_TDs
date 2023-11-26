#include <iostream>

int main()
{
    std::cout << "TD4 - Exercice 6" << std::endl;
    
    int number = {};
    std::cout << "Entrez un entier : ";
    std::cin >> number;
    int compteur = {1};

    while (number != 1) {
        compteur ++;
        if (number % 2 == 0) {
            number = number / 2;
        } else {
            number = 3 * number + 1;
        }
    }

    std::cout << "Il faudra " << compteur << " termes de la suite de Syracuse pour atteindre 1." << std::endl;

    return 0;
}