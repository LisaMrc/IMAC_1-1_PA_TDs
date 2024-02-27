#include <iostream>
#include <vector>
#include <cstdlib>

struct Position
{
    int x{0};
    int y{0};
};

enum class Direction {
    Up, 
    Down, 
    Forward,
    Backward,
};

struct Move
{
    Direction Direction_chosen{};
    int distance{};
};

void moveSubmarine(Position &position, Move move) {

    if (move.Direction_chosen == Direction::Up) {
        position.y+= move.distance;
    } else if (move.Direction_chosen == Direction::Down) {
        position.y-= move.distance;
    } else if (move.Direction_chosen == Direction::Forward) {
        position.x+= move.distance;
    } else if (move.Direction_chosen == Direction::Backward) {
        position.x-= move.distance;
    }
};

void display (Position &position) {
    std::cout << "Le sous-marin se trouve en x = " << position.x << " et y = " << position.y << std::endl;
};

int main()
{
    Position position {0, 0};

    std::vector<Move> moves = 
    {
        {Direction::Forward, 10},
        {Direction::Down, 5},
        {Direction::Backward, 3},
        {Direction::Up, 2},
        {Direction::Forward, 5},
        {Direction::Down, 1},
        {Direction::Backward, 2},
        {Direction::Forward, 3},
        {Direction::Down, 1},
        {Direction::Up, 3},
        {Direction::Forward, 1},
        {Direction::Down, 5},
        {Direction::Backward, 2},
        {Direction::Forward, 6}
    };

    for (int i = 0; i < moves.size(); i++)
    {
        moveSubmarine(position, moves[i]);
        display(position);
    }
}