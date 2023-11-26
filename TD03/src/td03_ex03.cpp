#include <iostream>
#include <typeinfo>

int main() {

    int age;
    std::cout << "Saisir une valeur :";
    std::cin >> age;

    if (std::cin.fail()) {
    std::cout << "Saisir l'âge avec des chiffres";
    std::cin.clear();
    }

    else if (age < 0)
    {
        std::cout << "L'âge ne peut pas être négatif";
        std::cin.clear();
    }
    else if (age>=18) {

        std::cout << "utilisateur majeur" << std::endl;
    }
    else {
    std::cout << "utilisateur mineur" << std::endl;
    }

    return 0;
}