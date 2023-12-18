#include <iostream>

// J'aurais aussi pu utiliser un "int const* const" pour que le pointeur lui même et la valeur pointée soient constantes
// Il y a rarement besoin de rajouter ce niveau de complexité mais dans de rares cas cela peut être utile
void display(int const * a)
{
    if (a == nullptr)
        std::cout << "nullptr" << std::endl;
    else {
        std::cout << *a << std::endl;
    }
}

int main()
{
    int* a { new int};

    std::cin >> *a;

    display(a);

    delete a;

    return 0;
}