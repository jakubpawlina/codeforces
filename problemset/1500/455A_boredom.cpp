#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int64_t occurences[100005];
int64_t result[100005];

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int64_t numbers_amount;
  std::cin >> numbers_amount;

  int64_t max = 0;

  for (int64_t i = 0; i < numbers_amount; ++i)
  {
    int64_t current_number;
    std::cin >> current_number;
    ++occurences[current_number];
    max = std::max(max, current_number);
  }

  result[0] = 0;
  result[1] = occurences[1];

  for (int64_t i = 2; i <= max; ++i)
  {
    result[i] = std::max(result[i - 1], result[i - 2] + occurences[i] * i);
  }

  std::cout << result[max] << '\n';

  return 0;
}