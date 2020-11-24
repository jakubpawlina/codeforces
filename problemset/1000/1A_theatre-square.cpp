#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  long long n, m, a;
  std::cin >> n >> m >> a;

  n = n / a + (long long)(bool)(n % a);
  m = m / a + (long long)(bool)(m % a);

  std::cout << n * m << '\n';

  return 0;
}