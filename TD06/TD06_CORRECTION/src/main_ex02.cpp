#include <iostream>

int factorial(int const n) {
    if (n <= 0) {
        return 1;
    }
    return n * factorial(n-1);
}

int factorial_iterative(int const n) {
    int result {1};
    // Je peux commencer à 2 directement car 1! = 1
    for (int i {2}; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main()
{
    int n {};
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Error: the number must be positive." << std::endl;
        return 1;
    }

    if (n > 12) {
        std::cout << "Error: the number is too big." << std::endl;
        return 1;
    }

    std::cout << "Factorial of " << n << " (recursive): " << factorial(n) << std::endl;
    std::cout << "Factorial of " << n << " (iterative): " << factorial_iterative(n) << std::endl;

    
    return 0;
}