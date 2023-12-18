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

    thresholdFilter(array_ptr, array_ptr.size(), .7, size_t& 40);

    delete[] array_ptr;
    return 0;
}   