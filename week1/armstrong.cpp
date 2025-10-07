// Armstrong number check.

#include <iostream>
#include <cmath>

int main()
{
  int num, result, remainder, length;
  std::cout << "Enter the number to check if it's armstrong: ";
  std::cin >> num;

  length = 0;

  for (int temp = num; temp != 0; temp /= 10)
    ++length;

  for (int temp = num; temp != 0; temp /= 10)
  {
    remainder = temp % 10;
    result += std::pow(remainder, length);
  }

  if (result == num)
    std::cout << "It's an Armstrong number!";
  else
    std::cout << "It's not an Armstrong number!";

  return 0;
}
