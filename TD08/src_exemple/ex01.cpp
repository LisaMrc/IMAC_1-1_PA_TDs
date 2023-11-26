#include <iostream>
#include <vector>
#include "utilities.hpp"

int main() {
    Point p1{}, p2{2, 3};
    initPoint(p1, 5, 6);

    int result = p1.x + p1.y;

    std::cout << result << std::endl;
}