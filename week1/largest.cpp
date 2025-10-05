// Find largest of three numbers.

#include <iostream>

int main()
{
  int num1, num2, num3, max;

  std::cout << "Enter first number: ";
  std::cin >> num1;
  std::cout << "Enter second number: ";
  std::cin >> num2;
  std::cout << "Enter third number: ";
  std::cin >> num3;

  // Using if-else
  if (num1 > num2)
  {
    if (num1 > num3)
    {
      max = num1;
    }
    else
    {
      max = num3;
    }
  }
  else
  {
    if (num2 > num3)
    {
      max = num2;
    }
    else
    {
      max = num3;
    }
  }

  std::cout << "Max number is: " << max << std::endl;

  // if-else improved!
  if (num1 >= num2 && num1 >= num3)
    max = num1;
  else if (num2 >= num1 && num2 >= num3)
    max = num2;
  else
    max = num3;

  std::cout << "Max number is: " << max << std::endl;

  // if-else improved again!
  max = num1;
  if (num2 > max)
  {
    max = num2;
  }
  if (num3 > max)
  {
    max = num3;
  }

  std::cout << "Max number is: " << max << std::endl;

  // using ternary operator
  max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

  std::cout << "Max number is: " << max << std::endl;

  // using max()
  max = std::max(num1, std::max(num2, num3));

  std::cout << "Max number is: " << max << std::endl;
}