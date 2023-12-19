#include "fraction.hpp"
#include <numeric>

unsigned int gcd(unsigned int a, unsigned int b) 
{
    return b == 0 ? a : gcd(b, a % b);
}

Fraction simplify(Fraction const& f)
{
    unsigned divisor{gcd(f.numerator, f.denominator)};

    return {
        f.denominator/divisor,
        f.numerator/divisor
    };
}