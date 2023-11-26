#include <iostream>
#include <string>

bool is_palindrome(std::string const& str)
{
    size_t const size {str.size()};
    // Astuce : on ne parcourt que la moitié de la chaîne
    for (size_t i {0}; i < size/2; ++i)
    {
        if (str[i] != str[size-1-i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::string str;
    std::cout << "Entrez une chaîne de caractères : ";
    std::cin >> str;

    // On met la chaîne en minuscules
    for (char& c : str)
    {
        // std::tolower est une fonction qui prend un caractère en paramètre et renvoie sa version minuscule
        // On aurait pu le faire nous-même avec un if et la valeur ASCII du caractère
        c = std::tolower(c);
        // J'ai une ref sur le caractère (char&), donc je peux le modifier et cela se répercute sur la chaîne
    }

    if (is_palindrome(str))
    {
        std::cout << str << " est un palindrome." << std::endl;
    }
    else
    {
        std::cout << str << " n'est pas un palindrome." << std::endl;
    }
    return 0;
}