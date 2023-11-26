#include <iostream>
#include <vector>

int main() {
    std::string saisie_total;
    std::string saisie;

    std::cout << "Saisissez un code bancaire" << std::endl;

    while (saisie_total.size() < 16) {
        std::cin >> saisie;
        saisie_total+=saisie;
    }

    std::vector<int> code;

    for (int i{0}; i<saisie_total.size(); i++) {
        char caracter_courant = saisie_total[i];
        int valeur = caracter_courant - '0';
        code.push_back(valeur);
    }

    std::cout << std::endl;

    for (int i {1}; i<code.size(); i+=2) {
        int valeur = code[i];
        valeur*=2;
        code[i] = valeur;
        int nouvelle_valeur{0};

        if (valeur>=10) {
            valeur = valeur % 10 + valeur / 10;
        }

        code[i] = valeur;
    }

    int sum{0};

    for (int i{0}; i<code.size(); i++) {
        sum += code[i];
    }

    std::cout << "La clé de contrôle donne " << sum << std::endl;

    if (sum%10==0) {
        std::cout << sum << " est un multiple de 10, donc le numéro de carte bancaire est valide" << std::endl;
    }
    else
    {
        std::cout << sum << " n'est pas multiple de 10, donc le numéro de carte bancaire est non valide" << std::endl;
    }
}