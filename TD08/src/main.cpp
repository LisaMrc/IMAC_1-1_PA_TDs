#include "fraction.hpp"
#include "utils.hpp"
#include <iostream>

int main() {

    Fraction f1 {};
    Fraction f2 {};
    
    std::cout << "Enter fraction 1 numerator and denominator :";
    std::cin >> f1.numerator >> f1.denominator;
    std::cout << "Enter fraction 2 numerator and denominator :";
    std::cin >> f2.numerator >> f2.denominator;

    std::cout << "f1 = ";
    f1.display();
    std::cout << "f2 = ";
    f2.display();

    Fraction add(Fraction const& f1, Fraction const& f2);
    Fraction sub(Fraction const& f1, Fraction const& f2);
    Fraction mul(Fraction const& f1, Fraction const& f2);
    Fraction div(Fraction const& f1, Fraction const& f2);

    return 0;
}