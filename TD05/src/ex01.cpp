#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

/* int main()
{
    size_t const dwarf_count = 20;

    std::vector<int> calories;

    // std::srand permet de fixer la "seed" du générateur aléatoire (pour avoir des résultats reproductibles)
    std::srand(42);
    
    for (int i = 0; i < dwarf_count; ++i)
    {
      calories.push_back(rand() % 24000 + 100);
    }

    // affichage optionnel des calories transportées par chaque nain
    for (int const c : calories)
    {
      std::cout << c << ", ";
    }
    std::cout << std::endl;

    // TODO: afficher la quantité de provisions la plus grande transportée par un nain
    
    int max_provision{0};
    int max_nain{0};

    int min_provision{24100};
    int min_nain{0};
    
    // En utilisant un for
    
    for (int i{0}; i < calories.size(); i++) {
        int valeur_courante = calories[i];

        if (valeur_courante > max_provision) {
            max_provision = valeur_courante;
            max_nain = i;
        }

        if (valeur_courante < min_provision) {
            min_provision = valeur_courante;
            min_nain = i;
        }
    }

    // En utilisant un sort (pour les nains 2 et 3)

    int max_provision2{};
    int max_provision3{};

    std::sort(calories.begin(), calories.end());

    max_provision = calories[calories.size()-1];
    max_provision2 = calories[calories.size()-2];
    max_provision3 = calories[calories.size()-3];
    min_provision = calories[0];

    std::cout << "La plus grande provision est de " << max_provision << " calories" << std::endl;
    std::cout << "Elle est détenue par le nain " << max_nain+1 << std::endl;
    std::cout << "La plus petite provision est de " << min_provision << " calories" << std::endl;
    std::cout << "Elle est détenue par le nain " << min_nain+1 << std::endl;

    return 0;
} */

int main()
{
    size_t const dwarf_count = 20;

    std::vector<int> calories;

    // std::srand permet de fixer la "seed" du générateur aléatoire (pour avoir des résultats reproductibles)
    std::srand(42);
    
    for (int i = 0; i < dwarf_count; ++i)
    {
      calories.push_back(rand() % 24000 + 100); /*Valeur entre 100 et 24 100*/
    }

    // affichage optionnel des calories transportées par chaque nain
    for (int const c : calories)
    {
      std::cout << c << ", ";
    }
    std::cout << std::endl;
    
    std::vector<int> max_provision{};
    int max_nain{0};
    
    for (int i{0}; i<10; i++)
    {
        max_provision.push_back(0);
    }
    
    for (int i{0}; i < dwarf_count; i++) {
        int valeur_courante = calories[i];

        for (int j{0}; j < dwarf_count; j++)
        {
            if (valeur_courante > max_provision[j]) {
                max_provision[j] = valeur_courante;
                break;
            }
        }
    }

    std::cout << "Les plus grandes provisions sont de ";
    for (int i{0}; i < max_provision.size(); i++)
    {
        std::cout << max_provision[i] << ", ";
    }

    return 0;
}