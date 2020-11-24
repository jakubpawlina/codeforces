#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int passed[1 << 7];

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  unsigned levels_number;
  std::cin >> levels_number;

  int little_x;
  std::cin >> little_x;

  while (little_x--)
  {
    int level;
    std::cin >> level;
    ++passed[level];
  }

  int little_y;
  std::cin >> little_y;

  while (little_y--)
  {
    int level;
    std::cin >> level;
    ++passed[level];
  }

  bool possible = true;
  for (size_t i = 1; i <= levels_number; ++i)
  {
    if (!passed[i])
    {
      possible = false;
      break;
    }
  }

  if (possible) std::cout << "I become the guy.\n";
  else std::cout << "Oh, my keyboard!\n";

  return 0;
}