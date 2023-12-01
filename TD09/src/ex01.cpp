#include <iostream>

// 3.Écrire une fonction qui prend en paramètre un pointeur sur un int et qui affiche la valeur de la variable pointée
int displayPtrVariable (int* ptrInt)
{
    std::cout << *ptrInt << std::endl;

    return 0;
};

int main()
{
    // 1. Allouer dynamiquement une variable de type int avec le mot-clé new (sans initialisation)
    int* integer_ptr {new int};

    // 2. Demander à l'utilisateur de saisir une valeur pour cette variable et modifier la valeur de la variable avec cette saisie
    std::cout << "Please enter value for integer_ptr (integer): ";
    std::cin >> *integer_ptr;

    // 4. Afficher la valeur de la variable avec la fonction
    displayPtrVariable(integer_ptr);

    // 5. Afficher l'adresse de la variable
    std::cout << integer_ptr << std::endl;

    // 6. Libérer cette variable avec le mot-clé delete
    delete integer_ptr;

    return 0;
}