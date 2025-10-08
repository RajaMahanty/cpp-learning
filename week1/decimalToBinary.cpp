// Decimal to Binary

#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
  int decimal = 0;
  std::string bin;
  std::cout << "Enter decimal: ";
  std::cin >> decimal;

  while (1)
  {
    if (decimal == 0)
      break;
    int remainder = decimal % 2;
    decimal = decimal / 2;
    bin.append(std::to_string(remainder));
  }
  std::reverse(bin.begin(), bin.end());
  std::cout
      << bin;
  return 0;
}