#include <iostream>

/* ________________ Version récursive ________________ 

int fact(int n) {
    int result{};

    if ((n < 0) || std::cin.fail() || std::numeric_limits<int>::max()/2) 
    {
        std::cout << "Erreur de saisie" << n << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');

    } else if (n <= 1)
    {
        result = 1;

    } else {
        std::cout << "FAC(" << n << ") = FAC ()" << n-1 << ") x " << n << std::endl;
        result = fact(n-1) + n;
    }

    return result;
}

int main() {
    int n {};
    std::cout << "Saisir un entier positif :" << std::endl;
    std::cin >> n;

    std::cout << "Le résultat est " << fact(n) << std::endl;
} */

/* ________________ Version itérative ________________ */

int fact(int n)
{
    int P { 1 };
    // Ici si n est négatif alors la condition i <= n est directement invalide et on ne passe pas dans la boucle if et on retourne 1
    for(int i {2}; i <= n; i++)
    {
        P *= i;
    }
    return P;
}

int main() {
    int n {};
    std::cout << "Saisir un entier positif :" << std::endl;
    std::cin >> n;

    std::cout << "Le résultat est " << fact(n) << std::endl;
}