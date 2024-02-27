#include <iostream>
#include <vector>

std::vector<int> generateRandomVector(int const size, int const min = 0, int const max = 100)
{
    // C'est une façon de faire (vous découvrirez la notion de constructeur plus tard)
    std::vector<int> v {};
    // reserve ici permet de réserver de la mémoire pour le vecteur (pour éviter d'avoir à redimensionner l'espace mémoire du vecteur (allocation dynamique) à chaque fois que l'on ajoute un élément)
    // C'est optionnel mais c'est une bonne pratique dans le cas où l'on sait à l'avance la taille du vecteur
    v.reserve(size);
    
    for (int i {0}; i < size; ++i) {
        v.push_back(rand() % (max - min + 1) + min);
    }
    return v;
}

// int const* get_max(std::vector<int> const& v)
// {
//     if (v.empty())
//         return nullptr;
    
//     int* max { &v[0] };
//     for (int i {1}; i < v.size(); ++i) {
//         if (v[i] > *max)
//             max = &v[i];
//     }
//     return max;
// }

int const* get_max(int const * const array, size_t const size)
{
    if (array == nullptr || size == 0)
        return nullptr;
    
    // Assigner array à max revient à faire max = &array[0], autrement dit max pointe vers le premier élément du tableau array
    int const* max { array };
    for (size_t i {1}; i < size; ++i) {
        if (array[i] > *max)
            max = array + i;
    }
    return max;
}

// Version surchargée de get_max qui prend un vecteur en paramètre
// J'utilise la méthode data() pour récupérer un pointeur vers le premier élément du vecteur
int const* get_max(std::vector<int> const& v) {
    return get_max(v.data(), v.size());
}

// Attention, la fonction suivante retourne un pointeur alloué dynamiquement, il faudra donc penser à libérer la mémoire après utilisation
int* sum(std::vector<int> const& v) {
    int sum {0};
    for (size_t i {0}; i < v.size(); ++i) {
        sum += v[i];
    }

    // Attention, il ne faux pas retourner l'adresse d'une variable locale (ici sum) car cette variable sera détruite à la fin de la fonction
    // Cela mène à un comportement indéfini
    // return &sum;

    // Si l'on veux retourner un pointeur il faut ici allouer dynamiquement la variable sum
    return new int {sum};
}

int main()
{
    srand(time(nullptr));

    std::vector<int> v {generateRandomVector(10)};

    int const* max {get_max(v)};

    if (max == nullptr)
        std::cout << "nullptr" << std::endl;
    else {
        std::cout << *max << std::endl;
    }

    int* sum_v {sum(v)};
    std::cout << *sum_v << std::endl;
    delete sum_v;

    return 0;
}