// Check if a string is an anagram.

#include <iostream>
#include <cctype>
#include <algorithm>

std::string bubbleSort(std::string str)
{
  bool swapped;
  for (int i = 0; i < str.length() - 1; i++)
  {
    swapped = false;
    for (int j = 0; j < str.length() - i - 1; j++)
    {
      if (std::tolower(str[j]) > std::tolower(str[j + 1]))
      {
        std::swap(str[j], str[j + 1]);
        swapped = true;
      }
    }
    if (!swapped)
      break;
  }
  return str;
}

int main()
{
  std::string str1, str2;
  std::cout << "Enter string 1: ";
  std::cin >> str1;
  std::cout << "Enter string 2: ";
  std::cin >> str2;

  std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
  std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

  str1 = bubbleSort(str1);
  str2 = bubbleSort(str2);

  std::cout << (str1 == str2);
  return 0;
}