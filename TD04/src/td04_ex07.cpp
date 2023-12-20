#include <iostream>

int main()
{
    int number = {};
    std::cout << "Entrez un entier positif : ";
    std::cin >> number;

    // Triangle
    for (int i = {0}; i < number; i++)
    {
        for (int j = {0}; j<= i; j++)
        {
            std::cout << "* " ;
        }
        std::cout << std::endl;
    }

    std::cout << "" << std::endl; // saut de ligne pour être plus lisible

    // Sapin
    for (int i = {1}; i<= number; i++) {
        for (int j = number-1-i; j>=0; j--) {
            std::cout << " ";
        }
        for (int k = {1}; k<=2*i-1; k++) {
            std::cout << "*";
        }
        std::cout << "" << std::endl;
    }

    std::cout << "" << std::endl; // saut de ligne pour être plus lisible

    // Carré
    for (int a = {0}; a< number; a++) {
        std::cout << "*" ;
    }
    std::cout << "" << std::endl;
    for (int i = {0}; i< number-2; i++) {
        std::cout << "*" ;
        for (int j = {0}; j<number-2; j++) {
            std::cout << " " ;
        }
        std::cout << "*" ;
        std::cout << "" << std::endl;
    }
    for (int a = {0}; a< number; a++) {
        std::cout << "*" ;
    }

    return 0;
}