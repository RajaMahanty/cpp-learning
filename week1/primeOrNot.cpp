#include <iostream>

// Naive Method — Time Complexity: O(n)
bool isPrime1(int n)
{
  if (n <= 1)
    return false;
  for (int i = 2; i < n; ++i)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}

// Slight Optimization — Time Complexity: O(n/2)
bool isPrime2(int n)
{
  if (n <= 1)
    return false;
  for (int i = 2; i < n / 2; ++i)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}

// More Optimized - TC: O(root n)
bool isPrime3(int n)
{
  if (n <= 1)
    return false;
  for (int i = 2; i * i <= n; ++i)
    if (n % i == 0)
      return false;
  return true;
}

int main()
{
  int n;
  std::cout << "Enter the number to check if it is prime: ";
  std::cin >> n;
  std::cout << (isPrime1(n) ? "Prime" : "Not Prime") << std::endl;
  std::cout << (isPrime2(n) ? "Prime" : "Not Prime") << std::endl;
  std::cout << (isPrime3(n) ? "Prime" : "Not Prime") << std::endl;
}
