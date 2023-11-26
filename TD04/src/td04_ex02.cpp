#include <iostream>

int main() {
    int cpt {1};

    while (cpt<20)
    {
        std::cout << cpt << std::endl;
        cpt++;
    }
    
    while (cpt<=50)
    {
        std::cout << cpt << "fois 7 = " << cpt*7 << std::endl;
        cpt++;
    }

        for (cpt=1; cpt<20; cpt++)
    {
        std::cout << cpt << std::endl;
    }
    
    for (cpt=1; cpt<50; cpt++)
    {
        std::cout << cpt << " fois 7 = " << cpt*7 << std::endl;
    }
}