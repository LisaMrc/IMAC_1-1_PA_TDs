#include <iostream>
#include <string>

float* generateRandomVector(size_t const size, float const min = 0, float const max = 100)
{
    float* array { new float[size] };
    for (size_t i {0}; i < size; ++i) {
        array[i] = (static_cast<float>(rand()) / RAND_MAX) * (max - min) + min;
    }

    return array;
}

float const* get_max(float const * const array, size_t const size)
{
    if (array == nullptr || size == 0)
        return nullptr;
    
    // Assigner array à max revient à faire max = &array[0], autrement dit max pointe vers le premier élément du tableau array
    float const* max { array };
    for (size_t i {1}; i < size; ++i) {
        if (array[i] > *max)
            max = array + i;
    }
    return max;
}

// Ici "float const* const" permet qu'aussi bien le pointeur que la valeur pointée ne soit modifiés
// new_size passé en référence non constante permet de modifier la valeur de la variable passée en paramètre pour pouvoir stocker la taille du tableau filtré
// C'est une astuce pour contourner le fait que l'on ne peut pas retourner deux valeurs en C++
// Une autre façon de faire et de retourner une structure contenant le tableau filtré et sa taille ou alors d'utiliser des std::pair ou std::tuple (on découvrira ces notions au second semestre)
float* thresholdFilter(float const* const array, size_t const size, float const threshold, size_t& new_size) {
    if (array == nullptr || size == 0)
        return nullptr;
    
    // On ne connaît pas la taille du tableau filtré à l'avance
    // Il faut alors allouer dynamiquement un tableau de taille size (dans le pire des cas, tous les éléments du tableau sont supérieurs au seuil)
    float* filteredArray { new float[size] };
    new_size = 0;
    for (size_t i {0}; i < size; ++i) {
        if (array[i] > threshold) {
            filteredArray[new_size] = array[i];
            ++new_size;
        }
    }

    // Si aucun élément du tableau n'est supérieur au seuil, on retourne un pointeur nul
    if (new_size == 0) {
        delete[] filteredArray;
        return nullptr;
    }

    if(new_size < size) {
        // Optionnel, on peut alors redimensionner le tableau pour ne pas avoir de mémoire inutilisée
        float* filteredArrayRightSize { new float[new_size] };

        // on copie les éléments du tableau filtré dans le tableau de la bonne taille
        for (size_t i {0}; i < new_size; ++i) {
            filteredArrayRightSize[i] = filteredArray[i];
        }
        // On peux aussi utiliser std::copy qui permet de copier espaces mémoires contigus plus simplement
        // std::copy(filteredArray, filteredArray + new_size, filteredArrayRightSize);

        // On libère la mémoire du tableau de taille size
        delete[] filteredArray;

        // On réassigne filteredArray à filteredArrayRightSize pour pouvoir retourner le tableau de la bonne taille à la fin de la fonction
        filteredArray = filteredArrayRightSize;
    }

    return filteredArray;
}

void displayArray(float const* const array, size_t const size, std::string separator = ", ") {
    if (array == nullptr || size == 0)
        return;
    
    for (size_t i {0}; i < size; ++i) {
        std::cout << array[i] << separator;
    }
    std::cout << std::endl;
}

int main()
{
    srand(time(nullptr));

    size_t size { 10 };
    float* array { generateRandomVector(size, 0.f, 10.f) };
    float const* maxValue { get_max(array, size) };
    size_t new_size {0};
    float const threshold { 5.f };
    // On passe new_size en référence pour pouvoir récupérer la taille du tableau filtré
    float* filteredArray { thresholdFilter(array, size, threshold, new_size) };

    std::cout << "Array: ";
    displayArray(array, size);
    std::cout << "Max value: " << *maxValue << std::endl;
    std::cout << "Filtered array ( > " << threshold << "): ";
    displayArray(filteredArray, new_size);
    
    // On pense à libérer la mémoire allouée dynamiquement
    delete[] array;
    delete[] filteredArray;
    // maxValue n'est pas alloué dynamiquement, c'est un pointeur vers un élément du tableau array, il ne faut donc pas le libérer

    return 0;
}