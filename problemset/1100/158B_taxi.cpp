#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int groups_number;
  std::cin >> groups_number;

  int quartets = 0;
  int trios = 0;
  int pairs = 0;
  int singles = 0;

  for (int i = 0; i < groups_number; ++i)
  {
    int group;
    std::cin >> group;
    if (group == 4) ++quartets;
    else if (group == 3) ++trios;
    else if (group == 2) ++pairs;
    else ++singles;
  }

  int cars_needed = quartets + trios + pairs / 2;

  singles = std::max(singles - trios, 0);
  if (pairs & 1) singles += 2;
  cars_needed += (singles / 4);
  if (singles % 4) ++cars_needed;

  std::cout << cars_needed << '\n';

  return 0;
}