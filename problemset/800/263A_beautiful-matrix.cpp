#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int x, y;

  for (size_t i = 1; i <= 5; ++i)
  {
    for (size_t j = 1; j <= 5; ++j)
    {
      bool number;
      std::cin >> number;
      if (number) x = i, y = j;
    }
  }

  std::cout << abs(3 - x) + abs(3 - y) << '\n';

  return 0;
}