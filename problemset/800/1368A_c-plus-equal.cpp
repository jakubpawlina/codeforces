#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int tests_number;
  std::cin >> tests_number;

  while (tests_number--)
  {
    int a, b, n;
    std::cin >> a >> b >> n; 
    int operations_number = 0;
    while (std::max(a, b) <= n)
    {
      if (a > b) std::swap(a, b);
      a += b;
      ++operations_number;
    }
    std::cout << operations_number << '\n';
  }
  
  return 0;
}