#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  long long n, k;
  std::cin >> n >> k;

  if (k > (n + 1) / 2)
  {
    std::cout << (k - (n + 1) / 2) * 2 << '\n';
  }
  else
  {
    std::cout << (k * 2) - 1 << '\n';
  }

  return 0;
}