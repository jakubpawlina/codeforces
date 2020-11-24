#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int a, b, c;
  std::cin >> a >> b >> c;

  int result = 0;
  result = std::max(result, a + b + c);
  result = std::max(result, (a * b) + c);
  result = std::max(result, (a + b) * c);
  result = std::max(result, a * b * c);
  result = std::max(result, a + (b * c));
  result = std::max(result, a * (b + c));

  std::cout << result << '\n';

  return 0;
}