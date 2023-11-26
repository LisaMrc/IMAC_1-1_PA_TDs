#include <iostream>

int main() {

    int altitude;
    std::cin >> altitude;

    if (altitude < 0) {
        std::cout << "Altitude saisie négative : vous faites bouillir de l'eau sous la mer ?" << std::endl;
        std::cin.clear(); // On remet std::cin dans un état fonctionnel.
        std::cin.ignore(255, '\n'); // On vide les caractères mémorisés.
        // le programme s'arrête si on a rencontré une erreur de saisie et renvoie 1 pour indiquer une erreur.
        return 1;

    } else {

        float temp;
        std::cin >> temp;

        bool sel;
        std::cin >> sel;

        float A;
        float pt_eb;
        float min;

        A = altitude / 300.f;
        pt_eb = 100.f - A;

        if (sel == true) {
            pt_eb+=1.5;
        }

        pt_eb-=temp;

        min = pt_eb/10;

        std::cout << "Il faut " << min << " minutes" << std::endl;
        
        std::cout << pt_eb << A << std::endl;


        return 0;
    }
}