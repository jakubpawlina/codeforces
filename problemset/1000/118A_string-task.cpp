#pragma GCC optimize("O3")
#include <bits/stdc++.h>

std::string remove_vowels(std::string input)
{
  std::string result = "";
  for (auto letter : input)
  {
    if (letter == 'a' || letter == 'o' || letter == 'y' || letter == 'e' || letter == 'u' || letter == 'i') continue;
    else result += letter;
  }
  return result;
}

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string word;
  std::cin >> word;

  std::transform(word.begin(), word.end(), word.begin(), ::tolower);

  word = remove_vowels(word);

  for (auto letter : word)
  {
    std::cout << '.' << letter;
  }

  return 0;
}