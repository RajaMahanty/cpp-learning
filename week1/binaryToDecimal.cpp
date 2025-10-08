// Binary to decimal

#include <iostream>
#include <cmath>

int main()
{
  int bin, length, decimal = 0;
  std::cout << "Enter binary: ";
  std::cin >> bin;

  for (int temp = bin, i = 0; temp != 0; temp /= 10, ++i)
  {
    decimal += (temp % 10) * std::pow(2, i);
  }

  std::cout << decimal;
  return 0;
}