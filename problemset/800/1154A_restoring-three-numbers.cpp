#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::vector <int> x(4);
  for (auto &i : x) std::cin >> i;

  std::sort(x.begin(), x.end());

  std::cout << x[3] - x[0] << ' ' << x[3] - x[1] << ' ' << x[3] - x[2] << '\n';

  return 0;
}
