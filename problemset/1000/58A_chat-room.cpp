#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string message;
  std::cin >> message;

  std::string hello = "hello";

  int needed = 1;

  for (size_t i = 0; i < message.length(); ++i)
  {
    if (needed == 1 && message[i] == 'h') ++needed;
    else if (needed == 2 && message[i] == 'e') ++needed;
    else if (needed == 3 && message[i] == 'l') ++needed;
    else if (needed == 4 && message[i] == 'l') ++needed;
    else if (needed == 5 && message[i] == 'o') ++needed;
    if (needed == 6)
    {
      std::cout << "YES\n";
      return 0;
    }
  }

  std::cout << "NO\n";

  return 0;
}