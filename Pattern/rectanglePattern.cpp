// Rectangle Pattern

/*

*****
*****
*****

*/

#include <iostream>

int main()
{
  int rows, stars;
  std::cout << "Enter rows: ";
  std::cin >> rows;
  std::cout << "Enter number of stars: ";
  std::cin >> stars;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < stars; j++)
    {
      std::cout << "*";
    }
    std::cout << "\n";
  }
  return 0;
}