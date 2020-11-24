#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string text;
  std::cin >> text;

  bool possible = true;

  for (size_t i = 1; i < text.length(); ++i)
  {
    if (islower(text[i]))
    {
      possible = false;
      break;
    }
  }

  if (possible)
  {
    for (size_t i = 0; i < text.length(); ++i)
    {
      if (islower(text[i]))
      {
        std::cout << (char) toupper(text[i]);
      }
      else
      {
        std::cout << (char) tolower(text[i]);
      } 
    }
  }
  else
  {
    std::cout << text;
  }

  std::cout << '\n';

  return 0;
}
