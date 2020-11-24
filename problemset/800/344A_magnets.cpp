#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int magnets_number;
  std::cin >> magnets_number;

  std::string last_magnet = "00";
  int groups_number = 0;

  while (magnets_number--)
  {
    std::string magnet;
    std::cin >> magnet;
    if (magnet != last_magnet) ++groups_number;
    last_magnet = magnet;
  }

  std::cout << groups_number << '\n';

  return 0;
}