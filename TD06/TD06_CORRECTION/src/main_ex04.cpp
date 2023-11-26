#include <iostream>
#include <string>
#include <vector>

// Ici j'utilise une référence constante pour éviter de copier toutes les valeurs du vecteur
// float average(std::vector<int> const values) est aussi v
float average(std::vector<int> const& values) {
    double sum {};
    for (int const& value : values) {
        sum += value;
    }
    // Ici j'ai besoin de caster sum en float car la division de deux entiers renvoie un entier
    return static_cast<float>(sum) / values.size();
}

float average(std::vector<float> const& values) {
    double sum {};
    for (float const& value : values) {
        sum += value;
    }
    return sum / values.size();
}

int main()
{
    std::vector<int> values_int {1, 2, 3, 4, 5};
    std::cout << "Average of {1, 2, 3, 4, 5}: " << average(values_int) << std::endl;

    std::vector<float> values_float {1.5, 2.5, 3.5, 4.5, 5.5};
    std::cout << "Average of {1.5, 2.5, 3.5, 4.5, 5.5}: " << average(values_float) << std::endl;

    return 0;
}