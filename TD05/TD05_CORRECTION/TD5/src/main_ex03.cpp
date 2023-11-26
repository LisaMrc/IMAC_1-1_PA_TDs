#include <iostream>
#include <vector>

int main() {
    int level {};
    std::cout << "Enter the level you finished: ";
    std::cin >> level;

    int enemy_count {};
    std::cout << "Enter the number of enemies you killed: ";
    std::cin >> enemy_count;

    std::vector<int> enemy_levels {};
    for (int i {0}; i < enemy_count; i++) {
        int enemy_level {};
        std::cout << "Enter the level of enemy " << i+1 << ": ";
        std::cin >> enemy_level;
        enemy_levels.push_back(enemy_level);
    }

    std::vector<int> multiples {};
    for (int const enemy_level : enemy_levels) {
        // Je cherche les multiples de enemy_level entre 1 et level
        std::vector<int> enemy_multiples {};
        for (int i {1}; i < level; i++) {
            if (i % enemy_level == 0) {
                enemy_multiples.push_back(i);
            }
        }

        for (int const multiple : enemy_multiples) {

            // Si le multiple n'est pas déjà dans le vecteur, on l'ajoute
            bool already_in_vector {false};
            for (int const elem : multiples) {
                if (elem == multiple) {
                    already_in_vector = true;
                    break;
                }
            }

            if (!already_in_vector) {
                multiples.push_back(multiple);
            }

            // C'est un exemple et ce serait plus simple avec des fonctions ou encore mieux avec des algorithmes de la STL que l'on découvrira au second semestre
        }
    }

    // Je fais la somme des multiples
    int energy_points {};
    for (int const multiple : multiples) {
        energy_points += multiple;
    }

    std::cout << "You earned " << energy_points << " energy points." << std::endl;

    return 0;
}
