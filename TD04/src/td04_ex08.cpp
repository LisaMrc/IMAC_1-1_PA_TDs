#include <cstdlib>
#include <ctime>
#include <iostream>
 
int main() 
{
  // Initialisation du générateur de nombres aléatoires avec la fonction time()
  std::srand(std::time(nullptr));
  int random_variable { std::rand() % 100 + 1};
  std::cout << "Try to guess the random value... " << std::endl;

  /*std::cout << random_variable << std::endl;*/
  
  int user_number{};
  
  do
  {
    std::cout << "Enter a number :" << std::endl;
    std::cin >> user_number;

    if (user_number > random_variable) 
    {
      std::cout << "-" << std::endl;
    } else if (user_number < random_variable)
    {
      std::cout << "+" << std::endl;
    }
    else
    {
      std::cout << "You guessed it !" << std::endl;      
    }

  } while (random_variable != user_number);
}