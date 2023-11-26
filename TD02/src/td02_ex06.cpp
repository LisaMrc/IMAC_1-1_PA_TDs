#include <iostream>

int main() {

    int nb_pdt;
    std::cin >> nb_pdt;

    int nb_carottes;
    std::cin >> nb_carottes;

    int nb_salades;
    std::cin >> nb_salades;

    float prix_commande = nb_pdt*2*1.5 + 0.375*nb_carottes + nb_salades*1.2;

    std::cout << prix_commande ;

    return 0;
}