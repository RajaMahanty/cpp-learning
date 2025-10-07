// Fibonacci series up to n terms.

#include <iostream>

int main()
{
  int a = 0, b = 1, c, num, fibSum;
  std::cout << "Enter a number: ";
  std::cin >> num;

  std::cout << "Fibonacci Series: ";
  for (int i = 0; i < num; i++)

  {
    std::cout << a << " ";
    c = a + b;
    a = b;
    b = c;
  }

  return 0;
}