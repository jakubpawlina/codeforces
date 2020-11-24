#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int x, y, a, b;
  std::cin >> x >> y >> a >> b;

  std::cout << b / (x * y / std::__gcd(x, y)) - (a - 1) / (x * y / std::__gcd(x, y)) << '\n';

  return 0;
}