// Task 2 - Max Value Finder

#include <iostream>

int maxValue(int a, int b)
{
  std::cout << "inside int maxValue(int, int)\n";
  if (a > b)
    return a;
  else
    return b;
}

double maxValue(double a, double b)
{
  std::cout << "inside double maxValue(double, double)\n";
  if (a > b)
    return a;
  else
    return b;
}

char maxValue(char a, char b)
{
  std::cout << "inside char maxValue(char, char)\n";
  if (a > b)
    return a;
  else
    return b;
}

int main()
{
  int int1, int2;
  double double1, double2;
  char char1, char2;

  std::cout << "Enter two integers: ";
  std::cin >> int1 >> int2;
  std::cout << "Max value: " << maxValue(int1, int2) << std::endl;

  std::cout << "Enter two doubles: ";
  std::cin >> double1 >> double2;
  std::cout << "Max value: " << maxValue(double1, double2) << std::endl;

  std::cout << "Enter two characters: ";
  std::cin >> char1 >> char2;
  std::cout << "Max value: " << maxValue(char1, char2) << std::endl;
  return 0;
}