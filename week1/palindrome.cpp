// Palindrome check (for numbers).
#include <iostream>
#include <algorithm>

int main()
{
  int num;
  std::cout << "Enter the number one: ";
  std::cin >> num;

  // std::string numStr = std::to_string(num);
  // std::string temp = numStr;
  // std::reverse(numStr.begin(), numStr.end());
  // if (numStr == temp)
  //   std::cout << "It's a Palindrome!";
  // else
  //   std::cout << "It's not a Palindrome!";

  int temp = num;
  int rev = 0;
  while (num > 0)
  {
    int ldigit = num % 10;
    num /= 10;
    rev = rev * 10 + ldigit;
  }
  std::cout << (temp == rev) << std::endl;

  return 0;
}