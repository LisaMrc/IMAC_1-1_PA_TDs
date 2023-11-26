#include <iostream>

int main() {

    float float1;
    float float2;
    float float3;

    std::cout << "1e flottant : " << std::endl;
    std::cin >> float1;

    std::cout << "2e flottant : " << std::endl;
    std::cin >> float2;

    std::cout << "3e flottant : " << std::endl;
    std::cin >> float3;

    float somme = float1 + float2 + float3;
    float moyenne { somme/3 };
    
    std::cout << "somme :" << somme << std::endl;
    std::cout << "moyenne :" << moyenne << std::endl;

    return 0;
}