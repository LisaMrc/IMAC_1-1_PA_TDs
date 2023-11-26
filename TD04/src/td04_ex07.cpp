#include <iostream>

/* ________________ Triangle ________________

int main()
{
    int saisie;
    std::cout << "Entrez un entier positif :" << std::endl;
    std::cin >> saisie;

    if (std::cin.fail()) {
        std::cout << "Erreur de saisie" << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
        return 1;
    
    } else {
        for (int ligne = 0; ligne < saisie; ligne++)
        {
            int symbolecount {ligne+1};
            for (int i = 0; i < symbolecount; i++) {
                std::cout << '*';
            }
            std::cout << std::endl;
        }
    }
} */

/* ________________ Sapin ________________ */

int main()
{
    int saisie;
    std::cout << "Entrez un entier positif :" << std::endl;
    std::cin >> saisie;

    if (std::cin.fail()) {
        std::cout << "Erreur de saisie" << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
        return 1;
    
    } else {
        for (int ligne = 0; ligne < saisie; ligne++)
        {
            int symbolecount {ligne+1};

            for (int i = symbolecount; i < 0; i-=1) {
                std::cout << ' ';
            }
            
            for (int i = 0; i < symbolecount; i++) {
                std::cout << '*';
            }
            std::cout << std::endl;
        }
    }
}