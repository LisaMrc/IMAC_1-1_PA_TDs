#include <iostream>
#include <vector>
#include <array>

int main()
{
    long int number {};
    std::cout << "Entrez un nombre entier positif : ";
    std::cin >> number;

    if (number < 0 || std::cin.fail())
    {
        std::cout << "La valeur entrée n'est pas un nombre entier positif." << std::endl;
        return 1;
    }

    std::vector<int> digits {};
    // On remplit digits en partant de la fin avec l'algorithme de la division euclidienne par 10
    while (number > 0)
    {
        digits.push_back(number % 10);
        number /= 10;
    }
    // Note: ils vont être dans l'ordre inverse mais ce n'est pas grave pour la suite

    // On compte les occurrences de chaque chiffre
    std::array<int, 10> digits_occurrences {};
    for (int const digit : digits)
    {
        digits_occurrences[digit] += 1;
    }

    // On cherche l'index du chiffre le plus fréquent
    size_t max_index {0};
    for (size_t i {1}; i < digits_occurrences.size(); ++i)
    {
        if (digits_occurrences[i] > digits_occurrences[max_index])
        {
            max_index = i;
        }
    }
    std::cout << "Le chiffre le plus fréquent est le " << max_index << ", il apparaît " << digits_occurrences[max_index] << " fois." << std::endl;

    return 0;
}