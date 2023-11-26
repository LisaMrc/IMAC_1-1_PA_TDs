#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cout << "Entrez une chaîne de caractères : ";
    std::cin >> str;


    //on met la chaîne en minuscules avec l'ascii 
    for (size_t i {0}; i < str.size(); ++i)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 'a' - 'A';
        }
    }
    // Il existe des façon plus élégantes de faire ça avec les références et des fonctions de la STL (voilà un exemple)
    // for (char& c : str)
    // {
    //     c = std::tolower(c);
    // }

    bool is_palindrome {true};
    // On parcourt la chaîne en partant des extrémités
    size_t const size {str.size()};
    // Astuce : on ne parcourt que la moitié de la chaîne
    for (size_t i {0}; i < size/2; ++i)
    {
        if (str[i] != str[size-1-i])
        {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome)
    {
        std::cout << str << " est un palindrome." << std::endl;
    }
    else
    {
        std::cout << str << " n'est pas un palindrome." << std::endl;
    }
    return 0;
}