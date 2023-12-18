#include <vector>
#include <cstdlib>
#include <iostream>

int const * findPtrOfMaximumInArray(int const* array, int length) 
{
    // 2. Écrire une fonction qui retourne un pointeur sur le plus grand élément du tableau
    int const* maxPtr { array };

    for(int i {1}; i < length; i++) 
    {
        if( array[i] > *maxPtr) {
            maxPtr = array + i;
        }
    }
    return maxPtr;
}

int const sumFromPtr(int const* array, size_t length) 
{
    // 3. Écrire une fonction qui prend en paramètre un pointeur et qui retourne la somme des éléments du tableau
    int sum {0};

    for(int i {0}; i < length; i++) 
    {
        sum+=array[i];
    }
    return sum;
}

int const * sum(std::vector<int> const& array, size_t length) 
{
    // 5. Compléter la fonction sum suivante pour qu'elle retourne un pointeur sur la somme des éléments du tableau passé en paramètre
    int sum {0};
    int* sumPtr { & sum};

    for(int i {0}; i < length; i++) 
    {
        sum+=array[i];
    }
    return sumPtr;
}

int main () 
{
    // 1. Écrire un programme qui génère un tableau (std::vector) de 100 entiers aléatoires compris entre 0 et 100
    std::vector<int>randomVector100{};

    for (int i = 0; i < 100; ++i)
    {
      randomVector100.push_back(rand() % 100);
    }

    // 4.Utiliser les fonctions précédentes pour afficher le plus grand élément du tableau et la somme des éléments du tableau
    std::cout << "The greatest element of this array is " << *(findPtrOfMaximumInArray(randomVector100.data(), randomVector100.size())) << ", at the address " << findPtrOfMaximumInArray(randomVector100.data(), randomVector100.size()) << std::endl;
    std::cout << "The sum of this array is " << sumFromPtr(randomVector100.data(), randomVector100.size()) << std::endl;

    // 6.Utiliser la fonction sum pour afficher la somme des éléments du tableau
    std::cout << "The sum of this array is " << *sum(randomVector100, randomVector100.size()) << std::endl;

    return 0;
}

// 7. En fonction du résultat obtenu, que pouvez-vous en déduire sur le fonctionnement de la fonction sum ?
// On peut en déduire que la fonction fait une somme, retourne le pointeur, 
// puis lors de l'affichage (dans le main) affiche la valeur