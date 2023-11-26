#include <iostream>

int main() {

    float saisie{};
    float somme{};
    int tours{};
    float moyenne{};

    do
    {
        std::cout << "Saisir un entier positif :" << std::endl;
        std::cin >> saisie;
        somme+=saisie;
        std::cout << "Somme :" << somme << std::endl;
        tours++;
        moyenne = somme / tours;
        std::cout << "Moyenne :" << moyenne << std::endl;

    } while (!((saisie < 0) || std::cin.fail()));

    std::cout << "Erreur de saisie";
}

