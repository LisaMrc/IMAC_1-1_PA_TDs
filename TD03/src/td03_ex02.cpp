#include <iostream>

int main() {
    int saisie;
    std::cout << "Saisir une valeur :";
    std::cin >> saisie;

    if (saisie % 2 == 0) {
        std::cout << saisie << "est pair" << std::endl;
    }
    else {
        std::cout << saisie << "est impair" << std::endl;
    }

    return 0;
}