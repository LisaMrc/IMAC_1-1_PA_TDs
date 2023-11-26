#include <iostream>

int main() {

    int number;
    std::cin >> number;

    char letter = static_cast<char>(number);
    
    std::cout << "La lettre correspondante est :" << letter << std::endl;

    return 0;
}