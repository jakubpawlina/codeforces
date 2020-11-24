#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int k, l, m, n, d;
  std::cin >> k >> l >> m >> n >> d;

  if (k == 1 || l == 1 || m == 1 || n == 1)
  {
    std::cout << d << '\n';
    return 0;
  }

  int result = 0;

  for (int i = 1; i <= d; ++i)
  {
    if (!(i % k) || !(i % l) || !(i % m) || !(i % n))
    {
      ++result;
    }
  }

  std::cout << result << '\n';

  return 0;
}
