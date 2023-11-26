#include <iostream>
#include <array>

int main() {
    std::array<int, 10> number {};

    // Ici je ne gère pas les cas d'erreur par souci de simplicité
    for (size_t i {0}; i < number.size(); i++) {
        std::cout << "Enter a number between 0 and 5: ";
        std::cin >> number[i];
    }

    for (size_t i {0}; i < number.size(); i++) {
        if (number[i] != 3) {
            continue;
        }

        if(i < 9) {
            // Décalage des éléments qui suivent d'un cran vers la gauche
            for (size_t j {i}; j < number.size()-1; j++) {
                number[j] = number[j+1];
            }

            // On met un 0 à la fin une fois le décalage terminé
            number.back() = 0;
            // On pourrait aussi garder dans une variable l'index à partir duquel on décalé et mis des 0 à la fin
            // pour éviter de reparcourir les derniers éléments du tableau pour rien
        }
    }

    for (int const value : number) {
        std::cout << value << " ";
    }
    return 0;
}