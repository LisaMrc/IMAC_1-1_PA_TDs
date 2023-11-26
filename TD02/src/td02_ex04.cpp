#include <iostream>

int main() {

    int jours_saisie;
    std::cin >> jours_saisie;
    int jours_saisie_affichage = jours_saisie;
    int siecles;
    int annees;
    int mois;
    int semaines;
    int jours;

    siecles = jours_saisie / 36000;
    jours_saisie %= 36000;
    annees = (jours_saisie) / 360;
    jours_saisie %= 360;
    mois = (jours_saisie) / 30;
    jours_saisie %= 30;
    semaines = (jours_saisie) / 7;
    jours = (jours_saisie % 7);
    std::cout << jours_saisie_affichage << " jours correspondent a " << siecles << " siecle(s, " << annees << " annee(s), " << mois << " mois, " << semaines << " semaine(s) et " << jours << " jours" <<std::endl;

    return 0;
}