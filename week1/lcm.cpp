// Find LCM using GCD (Euclidean algorithm)
#include <iostream>
#include <utility>

int main()
{
  int a, b;
  std::cout << "Enter two numbers: ";
  std::cin >> a >> b;

  int x = a;
  int y = b;

  // Ensure a >= b
  if (a < b)
    std::swap(a, b);

  // Find GCD using Euclidean algorithm
  int r;
  while (true)
  {
    r = a % b;
    if (r == 0)
      break;
    a = b;
    b = r;
  }

  int gcd = b;
  int lcm = (x * y) / gcd;

  std::cout << "LCM of " << x << " and " << y << " is: " << lcm << std::endl;
  return 0;
}
