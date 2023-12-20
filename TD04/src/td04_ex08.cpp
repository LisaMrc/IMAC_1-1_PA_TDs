#include <cstdlib>
#include <ctime>
#include <iostream>
 
int main() 
{
  std::srand(std::time(nullptr)); // Initialisation du générateur de nombres aléatoires avec la fonction time()
  int randomInt{std::rand() % 100 + 1};
  std::cout << "Try to guess the random value... " << std::endl;

  /*std::cout << randomInt << std::endl;*/

  int userGuess{};

  do
  {
    std::cout << "Enter a number :" << std::endl;
    std::cin >> userGuess;

    if (userGuess > randomInt) 
    {
      std::cout << "-" << std::endl;
    } else if (userGuess < randomInt)
    {
      std::cout << "+" << std::endl;
    }
    else
    {
      std::cout << "You guessed it !" << std::endl;      
    }

  } while (randomInt != userGuess);
}