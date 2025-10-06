// Factorial using loop.

#include <iostream>

int main()
{
  int num = 0, fact = 1;
  std::cout << "Enter the number for getting the factorial: ";
  std::cin >> num;
  if (num < 0)
  {
    std::cout << "Enter positive integer only!";
    return 1;
  }
  for (int i = 1; i <= num; i++)
  {
    fact *= i;
  }
  std::cout << "The factorial for " << num << " is " << fact;
  return 0;
}