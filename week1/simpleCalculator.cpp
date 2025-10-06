// Simple calculator (addition, subtraction, multiplication, division).

#include <iostream>

int main()
{
  int num1, num2;
  std::cout << "Welcome to Simple Calculator!" << std::endl;
  std::cout << "Enter the first number: ";
  std::cin >> num1;
  std::cout << "Enter the second number: ";
  std::cin >> num2;

  std::cout << "The addition of " << num1 << " and " << num2 << " is: " << num1 + num2 << std::endl;
  std::cout << "The substraction of " << num1 << " and " << num2 << " is: " << num1 - num2 << std::endl;
  std::cout << "The multiplication of " << num1 << " and " << num2 << " is: " << num1 * num2 << std::endl;
  std::cout << "The division of " << num1 << " and " << num2 << " is: " << num1 / num2 << std::endl;
  return 0;
}