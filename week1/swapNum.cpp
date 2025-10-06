// Swap two numbers (all methods);

#include <iostream>

int main()
{
  int num1, num2, temp;
  std::cout << "Enter first number: ";
  std::cin >> num1;
  std::cout << "Enter second number: ";
  std::cin >> num2;

  std::cout << "Number in first variable: " << num1 << std::endl;
  std::cout << "Number in second variable: " << num2 << std::endl;

  // Swapping using variable;
  std::cout << "Swapping using variable" << std::endl;
  temp = num1;
  num1 = num2;
  num2 = temp;

  std::cout << "Number in first variable: " << num1 << std::endl;
  std::cout << "Number in second variable: " << num2 << std::endl;

  // Swapping using swap method;
  std::cout << "Swapping using swap method" << std::endl;
  std::swap(num1, num2);

  std::cout << "Number in first variable: " << num1 << std::endl;
  std::cout << "Number in second variable: " << num2 << std::endl;

  // Swapping using Addition & Subtraction;
  std::cout << "Swapping using Addition & Subtraction" << std::endl;
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;

  std::cout << "Number in first variable: " << num1 << std::endl;
  std::cout << "Number in second variable: " << num2 << std::endl;

  // Swapping using Multiplication & Division (works only if numbers != 0);
  std::cout << "Swapping using Multiplication & Division" << std::endl;
  if (num1 != 0 && num2 != 0)
  {
    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;

    std::cout << "Number in first variable: " << num1 << std::endl;
    std::cout << "Number in second variable: " << num2 << std::endl;
  }
  else
    std::cout << "One or both the number contain 0 (zero), so skipping the method as it will not work!" << std::endl;

  // Swapping using XOR (bitwise swap);
  std::cout << "Swapping using XOR (bitwise swap)" << std::endl;
  num1 = num1 ^ num2;
  num2 = num1 ^ num2;
  num1 = num1 ^ num2;

  std::cout << "Number in first variable: " << num1 << std::endl;
  std::cout << "Number in second variable: " << num2 << std::endl;

  return 0;
}