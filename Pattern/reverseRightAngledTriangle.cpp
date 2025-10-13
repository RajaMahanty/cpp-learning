// reverse right-angled triangle

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
  for (int i = 5; i > 0; --i)
  {
    for (int j = i; j > 0; --j)
    {
      std::cout << "*";
    }
    std::cout << "\n";
  }
  return 0;
}