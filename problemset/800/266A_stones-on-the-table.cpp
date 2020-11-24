#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int stones_number;
  std::cin >> stones_number;

  std::string stones_color;
  std::cin >> stones_color;

  int stones_to_remove = 0;

  for (int i = 1; i < stones_number; ++i)
  {
    if (stones_color[i] == stones_color[i - 1]) ++stones_to_remove;
  }

  std::cout << stones_to_remove << '\n';

  return 0;
}