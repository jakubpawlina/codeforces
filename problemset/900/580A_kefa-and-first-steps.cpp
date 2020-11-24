#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int days_number;
  std::cin >> days_number;

  int max_non_decreasing = 1;
  int current_non_decreasing = 1;

  int last_day;
  std::cin >> last_day;

  for (int i = 1; i < days_number; ++i)
  {
    int current_day;
    std::cin >> current_day;
    if (current_day >= last_day)
    {
      ++current_non_decreasing;
    }
    max_non_decreasing = std::max(max_non_decreasing, current_non_decreasing);
    if (current_day < last_day) current_non_decreasing = 1;
    last_day = current_day;
  }

  std::cout << max_non_decreasing << '\n';

  return 0;
}