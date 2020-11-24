#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int words_number;
  std::cin >> words_number;
  while (words_number--)
  {
    std::string word;
    std::cin >> word;
    if (word.length() > 10)
    {
      std::cout << word[0] << word.length() - 2 << word[word.length() - 1] << '\n';
    }
    else std::cout << word << '\n';
  }

  return 0;
}