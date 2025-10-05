// Take name input and greet user.

#include <iostream>

int main()
{
  std::string name = "";
  std::cout << "Enter your name: ";
  std::getline(std::cin, name);
  std::cout << "Hello, " << name;
  return 0;
}