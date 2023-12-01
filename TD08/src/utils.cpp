#include "fraction.hpp"
#include <numeric>

int gcd(int pos_int1, int pos_int2)
{
    int pos_int1_is_greater {(pos_int1 > pos_int2) ? 1 : 0 };

    int div_result{};

    switch (pos_int1_is_greater)
    {
    case 1:
        div_result = pos_int1 % pos_int2;
        
        while (div_result != 0);
        {
            int div_result{pos_int1 % pos_int2};
            pos_int1 = pos_int2;
            pos_int2 = div_result;
        }
        
        break;
    
    default:
        div_result = pos_int2 % pos_int1;
        
        while (div_result != 0);
        {
            int div_result{pos_int2 % pos_int1};
            pos_int2 = pos_int1;
            pos_int1 = div_result;
        }
        
        break;
    }

    return div_result;
}

Fraction simplify(Fraction const& f)
{
    unsigned divisor{std::gcd(f.numerator, f.denominator)};
    
    return {
        f.denominator/divisor,
        f.numerator/divisor
    };
}