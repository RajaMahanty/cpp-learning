// Find GCD.
#include <iostream>

int main()
{
  int a, b;
  std::cout << "Enter two numbers: ";
  std::cin >> a >> b;
  if (a == b)
  {
    std::cout << "Greatest common factor is: " << a;
    return 0;
  }
  if (a < b)
  {
    std::swap(a, b);
  }
  int r = -1;
  int q = -1;
  while (1)
  {
    if (r == 0)
    {
      std::cout << "Greatest common factor is: " << b;
      return 0;
    }
    r = a % b;
    q = a / b;
    if (r != 0)
    {
      a = b;
      b = r;
    }
  }
  return 0;
}