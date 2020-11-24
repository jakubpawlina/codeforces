#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  long long a, b;
  std::cin >> a >> b;

  if (a / std::__gcd(a, b) * b == std::max(a, b) || a == b)
  {
    std::cout << "0\n";
    return 0;
  }

  std::vector <int> factors;
  int distance = (b - a < 0) ? (a - b) : (b - a);
  for (int i = 1; i * i <= distance; ++i)
  {
    if (!(distance % i))
    {
      factors.push_back(i);
      factors.push_back(distance / i);
    }
  }

  long long min_k = LLONG_MAX;
  long long min_lcm = LLONG_MAX;

  for (auto factor : factors)
  {
    long long k = (factor - (std::max(a, b) % factor));
    long long lcm = (a + k) * (b + k) / std::__gcd(a + k, b + k);
    if (lcm < min_lcm)
    {
      min_lcm = lcm;
      min_k = k;
    }
  }

  if (min_lcm > a / std::__gcd(a, b) * b)
  {
    min_k = 0;
  }

  std::cout << min_k << '\n';

  return 0;
}
