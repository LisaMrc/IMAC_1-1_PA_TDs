#include <iostream>
#include <array>	
#include <string>
#include <cctype> // pour la fonction std::tolower

char to_lower(char const c) {
    if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 'a';
    }
    return c;
}

std::array<int, 26> count_letters(std::string const& str) {
    std::array<int, 26> result {};
    // Attention ici `char c` n'est pas une référence constante,
    // je veux pouvoir modifier la copie pour la mettre en minuscule avant de l'utiliser
    for (char c: str) {
        c = to_lower(c);
        // alternative avec la fonction de la librairie standard
        // c = std::tolower(c);
        result[c - 'a']++;
    }
    return result;
}

bool is_pangram(std::string const& str) {
    std::array<int, 26> result {count_letters(str)};
    for (int i {0}; i < 26; i++) {
        if (result[i] == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    std::string str {"Portez ce vieux whisky au juge blond qui fume"};
    std::cout << str << std::endl;
    if (is_pangram(str)) {
        std::cout << "C'est un pangramme" << std::endl;
    } else {
        std::cout << "Ce n'est pas un pangramme" << std::endl;
    }
    return 0;
}