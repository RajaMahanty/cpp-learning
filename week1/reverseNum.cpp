// Reverse a number.

#include <iostream>
#include <algorithm>

int main()
{
  int num, rev = 0;
  std::cout << "Enter number: ";
  std::cin >> num;

  // Using Math
  while (num != 0)
  {
    int digit = num % 10;
    rev = rev * 10 + digit;
    num /= 10;
  }

  std::cout << "The number is reverse: " << rev << std::endl;

  std::cout << "Reversing the string again!" << std::endl;

  //  Using String Conversion
  std::string revNumStr = std::to_string(rev);
  reverse(revNumStr.begin(), revNumStr.end());
  std::cout << "The number is reverse: " << revNumStr;
  return 0;
}