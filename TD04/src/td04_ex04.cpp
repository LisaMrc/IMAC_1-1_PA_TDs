#include <iostream>
#include <vector>

int main()
{ 
    float montant{0};
    std::cout << "Entrez un montant en euros : ";
    std::cin >> montant;

    std::vector<float> tab {500.0f, 200.0f, 100.0f, 50.0f, 20.0f, 10.0f, 5.0f, 2.0f, 1.0f, 0.50, 0.20, 0.10, 0.05, 0.02, 0.01};
    int compteur{0};

    for (int i = 0; i < tab.size(); i++) {
        compteur = 0;
        while (montant >= tab [i]) {
            montant -= tab[i];
            compteur ++;
        }
        std::cout << "Il vous faut " << compteur << " billet(s) / piece(s) de " << tab [i] << " euros." << std::endl;
    } 
    return 0;
}