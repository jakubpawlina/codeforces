#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int red_socks, blue_socks;
  std::cin >> red_socks >> blue_socks;

  std::cout << std::min(red_socks, blue_socks) << ' ' << (std::max(red_socks, blue_socks) - std::min(red_socks, blue_socks)) / 2 << '\n';

  return 0;
}