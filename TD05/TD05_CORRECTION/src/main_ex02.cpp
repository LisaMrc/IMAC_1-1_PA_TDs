#include <iostream>
#include <cmath>
#include <array>

int main()
{
    long int credit_card_number;

    std::cout << "Enter a credit card number: ";
    std::cin >> credit_card_number;

    // Test case
    // credit_card_number = 1234'5678'9002'3456;

    int const number_of_digits {static_cast<int>(std::log10(credit_card_number)) + 1};

    if (number_of_digits != 16)
    {
        std::cout << "Invalid credit card number (must have 16 digits)" << std::endl;
        return 1;
    }

    // Ici digits est initialisé avec des 0
    std::array<int, 16> digits {};

    // On remplit digits en partant de la fin avec l'algorithme de la division euclidienne par 10
    for (int i {0}; i < 16; ++i)
    {
        digits[15-i] = credit_card_number % 10;
        credit_card_number /= 10;
    }

    int luhn_sum {0};
    for(size_t i {0}; i < digits.size(); ++i)
    {
        int digit {digits[i]};
        // ici digit est une copie de l'élément de digits
        // On multiplie par 2 les chiffres de rang pair
        if (i % 2 != 0)
        {
            digit *= 2;

            // Si le résultat est supérieur à 9, on le remplace par la somme de ses chiffres
            if (digit > 9)
            {
                digit = digit % 10 + digit / 10;
            }
        }

        // On ajoute le chiffre à la somme
        luhn_sum += digit;
    }


    std::cout << "Luhn sum: " << luhn_sum << std::endl;

    if (luhn_sum % 10 == 0)
    {
        std::cout << "Valid credit card number" << std::endl;
    }
    else
    {
        std::cout << "Invalid credit card number" << std::endl;
    }

    
    return 0;
}