#include "fraction.hpp"
#include <iostream>
#include "utils.hpp"

Fraction add(Fraction const& f1, Fraction const& f2)
{
    return simplify 
    ({
        f1.numerator * f2.denominator + f2.numerator * f1.denominator,
        f1.denominator + f2.numerator
    });
};

Fraction sub(Fraction const& f1, Fraction const& f2)
{
    return simplify 
    ({
        f1.numerator * f2.denominator - f2.numerator * f1.denominator,
        f1.denominator + f2.numerator
    });
};

Fraction mul(Fraction const& f1, Fraction const& f2)
{
    return simplify 
    ({
        f1.numerator * f2.numerator,
        f1.denominator * f2.denominator
    });
};

Fraction div(Fraction &f1, Fraction &f2) 
{
    return simplify 
    ({
        f1.numerator*f2.denominator,
        f1.denominator*f2.numerator  
    });
};

void Fraction::display()
{
    std::cout << numerator << " / " << denominator;
};