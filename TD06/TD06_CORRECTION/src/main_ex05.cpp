#include <iostream>
#include <array>

// Je déclare la fonction Vn avant de la définir pour pouvoir l'utiliser dans la définition de Un
int Vn(int const n);

int Un(int const n) {
    if (n <= 0) { return 1; }
    return 3 * Un(n-1) + 2 * Vn(n-1);
}

int Vn(int const n) {
    if (n <= 0) { return 2; }
    return 2 * Vn(n-1) + Un(n-1) + 1;
}

// Bonus : version itérative
std::array<int, 2> UnAndVn_iterative(int const n) {
    std::array<int, 2> result {1, 2};
    for (int i {1}; i <= n; i++) {
        std::array<int, 2> current {result};
        result[0] = 3 * current[0] + 2 * current[1];
        result[1] = 2 * current[1] + current[0] + 1;
    }
    return result;
}

int main()
{
    for (int i {0}; i < 10; i++) {
        std::cout << "U" << i << " = " << Un(i) << " et " << "V" << i << " = " << Vn(i) << std::endl;
    }

    std::cout << "U" << 9 << " = " << UnAndVn_iterative(9)[0] << " et " << "V" << 9 << " = " << UnAndVn_iterative(9)[1] << std::endl;
    return 0;
}