// Generate multiplication table.

#include <iostream>

int main()
{
  int num;
  std::cout << "Enter the number to generate multiplication table: ";
  std::cin >> num;

  for (int i = 1; i < 11; ++i)
  {
    std::cout << num << " x " << i << " = " << i * num << std::endl;
  }

  return 0;
}