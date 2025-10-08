// Count vowels and consonants in a string.

#include <iostream>
#include <cctype>

int main()
{
  int vowel = 0, con = 0;
  std::string str;
  std::cout << "Enter a string: ";
  std::getline(std::cin, str);

  for (char ch : str)
  {
    ch = std::tolower(ch); // normalize to lowercase

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      ++vowel;
    else if (!std::isalpha(ch)) // skip non-letters
      continue;
    else
      ++con;
  }

  std::cout << "Number of vowels are: " << vowel << " and number of consonents are: " << con;
  return 0;
}