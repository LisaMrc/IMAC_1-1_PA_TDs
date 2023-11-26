#include "fraction.hpp"
#include <iostream>
#include "utils.hpp"

Fraction add(Fraction &f1, Fraction &f2)
{
    Fraction fRes {
        f1.numerator*f2.denominator + f2.numerator*f1.denominator,
        f1.denominator*f2.denominator,
    };
    simplify(fRes);
    return fRes;
};

Fraction sub(Fraction const& f1, Fraction const&f2) 
{
    Fraction fRes {
        f1.numerator*f2.denominator - f2.numerator*f1.denominator,
        f1.denominator*f2.denominator,
    };
    simplify(fRes);
    return fRes;
};

Fraction mul(Fraction &f1, Fraction &f2) 
{
    return 
    {
        f1.numerator*f2.numerator,
        f1.denominator*f2.denominator
    };
};

Fraction div(Fraction &f1, Fraction &f2) 
{
    return 
    {
        f1.numerator*f2.denominator,
        f1.denominator*f2.numerator  
    };
};

void Fraction::display()
{
    std::cout << numerator << " / " << denominator;
};