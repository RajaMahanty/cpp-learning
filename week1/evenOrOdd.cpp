// Check whether a number is even or odd.

#include <iostream>

int main()
{
  int num;
  std::cout << "Enter the number to check Even Odd: ";
  std::cin >> num;

  // Cheking Even or Odd
  if (num % 2 == 0)
  {
    std::cout << num << " is Even.";
  }
  else
    std::cout << num << " is Odd.";

  return 0;
}