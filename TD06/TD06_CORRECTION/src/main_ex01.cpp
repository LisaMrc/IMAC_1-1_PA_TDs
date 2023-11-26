#include <iostream>

int somme(int a, int b) {
    return a + b;
}

int sum_with_ref(int const& a, int const& b) {
    return a + b;
}

int main()
{
    int a {1};
    int b {2};

    std::cout << "a + b = " << somme(a, b) << std::endl;
    std::cout << "a + b = " << sum_with_ref(a, b) << std::endl;
    std::cout << "a + b = " << sum_with_ref(1, 2) << std::endl;
    
    return 0;
}