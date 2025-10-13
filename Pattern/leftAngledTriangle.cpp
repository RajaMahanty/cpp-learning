// right-aligned

/*

    *
   **
  ***
 ****
*****

*/

#include <iostream>

int main()
{
  int n = 5;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
      std::cout << " ";

    for (int k = 0; k < i + 1; k++)
      std::cout << "*";

    std::cout << "\n";
  }
  return 0;
}