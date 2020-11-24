#pragma GCC optimize("O3")
#include <bits/stdc++.h>

long long f(long long n);

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  long long n;
  std::cin >> n;

  std::cout << f(n) << '\n';

  return 0;
}

long long f(long long n)
{
  if (n & 1) return f(n - 1) - n;
  return (n >> 1);
}