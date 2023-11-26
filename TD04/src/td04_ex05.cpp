#include <iostream>

int main() {

    int saisie{};
    std::cout << "Saisir un nombre :" << std::endl;
    std::cin >> saisie;

    while (saisie>=0 && !((saisie < 0) || std::cin.fail()))
    {
        
        for (int i = 0; i <= 10; i++)
        {
            std::cout << i << "*" << saisie <<  " = " << i*saisie << std::endl;
        }

        std::cout << "Saisir un nombre :" << std::endl;
        std::cin >> saisie;
    }

    std::cout << "Erreur de saisie";
    std::cin.clear();
    std::cin.ignore(255, '\n');
}