// Number Guessing Game - User tries to guess a randomly generated number

#include <iostream>
#include <random>
#include <ctime>

int main()
{
  // Seed the random number generator
  std::srand(std::time(0));

  // Generate random number between 1 and 100
  int secretNumber = std::rand() % 100 + 1;
  int userGuess;
  int attempts = 0;
  const int maxAttempts = 7; // limit attempts

  std::cout << "=== Welcome to the Number Guessing Game! ===" << std::endl;
  std::cout << "I'm thinking of a number between 1 and 100." << std::endl;
  std::cout << "You have " << maxAttempts << " attempts to guess it!" << std::endl;
  std::cout << "Good luck!" << std::endl
            << std::endl;

  while (attempts < maxAttempts)
  {
    std::cout << "Attempt " << (attempts + 1) << "/" << maxAttempts << std::endl;
    std::cout << "Enter your guess: ";
    std::cin >> userGuess;

    attempts++;

    if (userGuess == secretNumber)
    {
      std::cout << "🎉 Congratulations! You guessed it right!" << std::endl;
      std::cout << "The number was " << secretNumber << std::endl;
      std::cout << "You won in " << attempts << " attempts!" << std::endl;
      return 0;
    }
    else if (userGuess < secretNumber)
    {
      std::cout << "Too low! Try a higher number." << std::endl;
    }
    else
    {
      std::cout << "Too high! Try a lower number." << std::endl;
    }

    std::cout << "Attempts remaining: " << (maxAttempts - attempts) << std::endl;
    std::cout << std::endl;
  }

  // Game over - user ran out of attempts
  std::cout << "😞 Game Over! You've used all your attempts." << std::endl;
  std::cout << "The secret number was: " << secretNumber << std::endl;
  std::cout << "Better luck next time!" << std::endl;

  return 0;
}