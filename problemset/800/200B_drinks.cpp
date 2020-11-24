#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int drinks_number;
  std::cin >> drinks_number;

  int orange_juice = 0;

  for (int i = 0; i < drinks_number; ++i)
  {
    int percentage;
    std::cin >> percentage;
    orange_juice += percentage;
  }

  std::cout.precision(10);
  std::cout << std::fixed << (double)orange_juice / (double)drinks_number << '\n';

  return 0;
}