#include <cstdlib>
#include <iostream>

int const * findPtrOfMaximumInArray(int const* array, int length) 
{
    // 2. Écrire une fonction qui prend en paramètre un tableau de flottants 
    // (sous la forme d'un pointeur sur le premier élément du tableau) 
    // et sa taille et qui retourne un pointeur sur le plus grand élément du tableau
    int const* maxPtr { array };

    for(int i{1}; i < length; i++) 
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
    float* arrayThreshold {new float[new_size]};
    int arrayThresholdCount{0};

    while ( arrayThresholdCount != new_size)
    {
        for(int i{0}; i < size; i++) 
        {
            if( array[i] > threshold)
            {
                arrayThreshold[i] = array[arrayThresholdCount];
                arrayThresholdCount++;
            }
        }
    }
    return arrayThreshold;
}

int main()
{
    // 1. Allouer dynamiquement un tableau de 100 flottants aléatoires compris entre 0 et 100
    float* array_ptr {new float[100]};
    for (int i = 0; i < 100; ++i)
    {
      array_ptr[i] = (rand() / RAND_MAX ) * 100;
    }

    size_t new_size {0};

    thresholdFilter(array_ptr, 100, 5.f, new_size);

    delete[] array_ptr;
    return 0;
}   