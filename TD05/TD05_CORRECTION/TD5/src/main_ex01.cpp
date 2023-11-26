#include <iostream>
#include <vector>
#include <cstdlib> // std::rand
#include <array>
#include <algorithm> // std::swap

int main()
{
    size_t const dwarf_count {20000};

    // std::srand permet de fixer la "seed" du générateur aléatoire (pour avoir des résultats reproductibles)
    std::srand(42);

    // Je créer un vecteur avec 20000 valeurs aléatoires entre 100 et 24000
    std::vector<int> calories {};
    for (size_t i {0}; i < dwarf_count; ++i)
    {
        // rand() % (max - min) + min;
        calories.push_back(rand() % (24000 - 100) + 100);
    }

    // J'affiche les valeurs du vecteur si il y en a moins de 30
    if (calories.size() < 30)
    {
        for (int const cal : calories)
        {
            std::cout << cal << ", ";
        }
    }

    // Je cherche les valeurs min et max
    // Je prends le premier élément comme valeur max initiale
    int min {calories[0]};
    int max {calories[0]};
    for (size_t i {1}; i < calories.size(); ++i)
    {
        if (calories[i] > max)
        {
            max = calories[i];
        }
        if (calories[i] < min)
        {
            min = calories[i];
        }
    }

    std::cout << "Le nain le plus fort a transporté " << max << " calories." << std::endl;
    std::cout << "Le nain le plus faible a transporté " << min << " calories." << std::endl;

    // Je cherche les trois plus grandes valeurs

    // Je stocke les trois plus grandes valeurs dans un std::array
    std::array<int, 3> top_three_max {calories[0], calories[0], calories[0]};
    for (size_t i {1}; i < calories.size(); ++i)
    {
        // Si la valeur est plus grande que la plus petite des trois, je la remplace
        if (calories[i] > top_three_max[2])
        {
            top_three_max[2] = calories[i];
        }

        // Je fais en sorte de faire "remonter" la plus grande valeur en première position (parmi les trois)
        // Cela me permet de garder triées les trois plus grandes valeurs
        if (top_three_max[2] > top_three_max[1])
        {
            std::swap(top_three_max[2], top_three_max[1]);

            // std::swap equivalent à:
            // int const tmp {top_three_max[2]};
            // top_three_max[2] = top_three_max[1];
            // top_three_max[1] = tmp;

            if (top_three_max[1] > top_three_max[0])
            {
                std::swap(top_three_max[1], top_three_max[0]);
            }
        }
    }

    // Je fais la somme des trois plus grandes valeurs
    int sum {0};
    for (int const cal : top_three_max)
    {
        sum += cal;
    }

    std::cout << "Les trois nains les plus forts ont transporté " << sum << " calories." << std::endl;
    return 0;
}