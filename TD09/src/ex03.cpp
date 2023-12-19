#include <cstdlib>
#include <iostream>

float const* ptrOnArraysMax(float const * array, size_t const size) 
{
    // 2. Écrire une fonction qui prend en paramètre un tableau de flottants 
    // (sous la forme d'un pointeur sur le premier élément du tableau) 
    // et sa taille et qui retourne un pointeur sur le plus grand élément du tableau

    if (array == nullptr || size == 0)
    return nullptr;
    
    float const* maxPtr { array };

    for(size_t i{1}; i < size; ++i) 
    {
        if( array[i] > *maxPtr)
        {
            maxPtr = array + i;
        }
    }
    return maxPtr;
}

float* thresholdFilter(float const* const array, size_t const size, float const threshold, size_t& new_size)
{
    // 3. Écrire une fonction thresholdFilter qui prend en paramètre un tableau de flottants, 
    // sa taille, un seuil et une référence sur un entier qui contiendra la taille du nouveau tableau 
    // et qui retourne un pointeur sur le premier élément du nouveau tableau
 
    if (array == nullptr || size == 0)
    return nullptr;
    
    float* arrayThreshold {new float[size]};
    new_size = 0;

    for (size_t i {0}; i < size; ++i) {
        if (array[i] > threshold) {
            arrayThreshold[new_size] = array[i];
            ++new_size;
        }
    }

    if (new_size == 0) {
        delete[] arrayThreshold;
        return nullptr;
    }
    
    if(new_size < size) {
        // Optionnel, on peut alors redimensionner le tableau pour ne pas avoir de mémoire inutilisée
        float* filteredArrayRightSize { new float[new_size] };

        // on copie les éléments du tableau filtré dans le tableau de la bonne taille
        for (size_t i {0}; i < new_size; ++i) {
            filteredArrayRightSize[i] = arrayThreshold[i];
        }
        // On peux aussi utiliser std::copy qui permet de copier espaces mémoires contigus plus simplement
        // std::copy(arrayThreshold, arrayThreshold + new_size, filteredArrayRightSize);

        // On libère la mémoire du tableau de taille size
        delete[] arrayThreshold;

        // On réassigne arrayThreshold à filteredArrayRightSize pour pouvoir retourner le tableau de la bonne taille à la fin de la fonction
        arrayThreshold = filteredArrayRightSize;
    }

    return arrayThreshold;
}

void displayArray(float const* const array, size_t const size, std::string separator = ", ") {
    if (array == nullptr || size == 0)
    return;

    for (size_t i {0}; i < size; ++i) 
    {
        std::cout << array[i] << separator;
    }

    std::cout << std::endl;
}

int main()
{
    srand(time(nullptr));

    // 1. Allouer dynamiquement un tableau de 100 flottants aléatoires compris entre 0 et 100
    float* array_ptr {new float[100]};
    for (size_t i {0}; i < 100; ++i)
    {
      array_ptr[i] = (static_cast<float>(rand()) / RAND_MAX ) * 100;
    }

    size_t new_size {100};

    std::cout << "Array: ";
    displayArray(array_ptr, 100);
    
    std::cout << "Max value: " << *ptrOnArraysMax(array_ptr, 100) << std::endl;

    std::cout << "Filtered array ( > " << 5 << "): ";
    displayArray(thresholdFilter(array_ptr, 100, 5.f, new_size), new_size);

    delete[] array_ptr;
    return 0;
}   