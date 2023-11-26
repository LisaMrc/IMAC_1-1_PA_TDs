#include <iostream>
#include <vector>

// Ici j'utilise une référence constante pour éviter de copier le vecteur
void display_vector(std::vector<int> const& vec, std::string const& separator = ", ")
{
    for (size_t i {0}; i < vec.size()-1; ++i)
    {
        std::cout << vec[i] << separator;
    }
    std::cout << vec.back() << std::endl;
}

std::vector<int> fibonacci(int const n) {
    // C'est légèrement inexact pour n = 0 ou n = 1 mais ce n'est pas grave
    if (n <= 2) { return {0, 1}; }
    
    std::vector<int> fibo {fibonacci(n-1)};
    fibo.push_back(fibo[n-1] + fibo[n-2]);
    return fibo;
}

std::vector<int> fibonacci_iterative(int const n) {
    std::vector<int> fibo {0, 1};

    if (n <= 2) { return fibo; }

    for (int i {2}; i < n; i++) {
        fibo.push_back(fibo[i-1] + fibo[i-2]);
    }
    return fibo;
}

int main() {
    
    int n {};
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Error: the number must be positive." << std::endl;
        return 1;
    }

    std::vector<int> fibo {fibonacci(n)};
    std::cout << "Fibonacci sequence (recursive): ";
    display_vector(fibo);

    std::cout << "Fibonacci sequence (iterative): ";
    display_vector(fibonacci_iterative(n));

    return 0;
}
