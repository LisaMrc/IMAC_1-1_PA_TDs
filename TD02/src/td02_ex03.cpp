#include <iostream>

int main() {

    int number { 11 };
    std::cout << "Initialisation :" << number << std::endl;
    
    number/=2;
    std::cout << "Division par 2 :" << number << ", on obtient un entier car on demande une division d'entiers" <<std::endl;
    
    static_cast<float>(number);
    number/=2.0f;
    std::cout << "Conversion puis division par 2.0f :" << number <<std::endl;

    return 0;
}