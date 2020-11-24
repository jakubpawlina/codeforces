#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string word;
  std::cin >> word;

  int uppercase_letters_number = 0;
  for (auto letter : word)
  {
    if ((int)letter >= 65 && (int)letter <= 90)
    {
      ++uppercase_letters_number;
    }
  }

  if ((uppercase_letters_number << 1) > word.length())
  {
    std::transform(word.begin(), word.end(), word.begin(), ::toupper);
  }
  else
  {
    std::transform(word.begin(), word.end(), word.begin(), ::tolower);
  }

  std::cout << word << '\n';  

  return 0;
}