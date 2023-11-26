#include <iostream>
#include <vector>

std::vector<std::vector<int>> sand = 
{
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {2, 2, 2, 1, 1, 1, 0, 0, 0, 0},
};

int nb_dangerous_areas{};

int scan_sand (std::vector<std::vector<int>> sand) {
    for (int i = 0; i < sand.size(); i++) {
        for (int j = 0; j < 10; j++) {
            if(sand[i][j] >= 2) {
                nb_dangerous_areas++;
            };
        };
    };
    
    return nb_dangerous_areas;
};

int main() {

    scan_sand(sand);
    std::cout << "There is " << nb_dangerous_areas << " dangerous areas to avoid" << std::endl;
}
