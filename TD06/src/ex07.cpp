#include <iostream>	
#include <string>
#include <cctype>

void reverseCase(std::string& str) {
    for (char& c : str) {
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';
        }else if (c >= 'a' && c <= 'z') {
            c = c - 'a' + 'A';
        }
    }
}

int countVowels(std::string const& str) {
    int count {0};
    for (char c : str) {
        c = std::tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int countWords(std::string const& str) {
    int count {0};
    bool inWord {false};
    for (char const& c : str) {
        if (c == ' ') {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}

std::string reverseString(std::string const& str) {
    // Je fais une copie
    std::string result {str};

    // Je fais des échanges successifs pour inverser la chaîne
    size_t const size {result.size()};
    for (size_t i {0}; i < size/2; i++) {
        char tmp {result[i]};
        result[i] = result[size-1-i];
        result[size-1-i] = tmp;
        // std::swap(result[i], result[size-1-i]);
    }

    return result;
}

bool isInteger(std::string const& str) {
    for (char const c : str) {
        if (c < '0' || c > '9') {
            return false;
        }
    }
    return true;
}

int main() {

    std::string str {"Portez ce vieux whisky au juge blond qui fume"};
    std::cout << str << std::endl;
    reverseCase(str);
    std::cout << str << std::endl;
    std::cout << "Il y a " << countVowels(str) << " voyelles" << std::endl;
    std::cout << "Il y a " << countWords(str) << " mots" << std::endl;
    std::cout << "La phrase " << str << " à l'envers donne " << reverseString(str) << std::endl;
    std::cout << "Le phrase " << str << " est-il un entier ? " << isInteger(str) << std::endl;

    return 0;
}