#include <vector>
#include <cstdlib>

int* ptrOnGreaterTableNbr (std::vector<int>vectorOfInts)
{
    int* greaterTableElementPtr{vectorOfInts[0]};

    for (int i{0}; i < vectorOfInts.size(); i++) {
        int currentValue = vectorOfInts[i];

        if (currentValue > greaterTableElement) {
            greaterTableElement = currentValue; 
        }
    }

    return *greaterTableElement;
};

int main () {
    // 1. Écrire un programme qui génère un tableau (std::vector) de 100 entiers aléatoires compris entre 0 et 100
    std::vector<int>randomVector100{};

    for (int i = 0; i < 100; ++i)
    {
      randomVector100.push_back(rand() % 100);
    }

    return 0;
}