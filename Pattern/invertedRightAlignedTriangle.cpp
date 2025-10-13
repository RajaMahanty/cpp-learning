// inverted right-aligned triangle

/*

*****
 ****
  ***
   **
    *

*/

#include <iostream>

int main()
{
  int n = 5;
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < i; ++j)
      std::cout << " ";
    for (int k = 0; k < n - i; ++k)
      std::cout << "*";
    std::cout << "\n";
  }
  return 0;
}