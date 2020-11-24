#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int coins_number;
  std::cin >> coins_number;

  int coins[coins_number];
  int sum = 0;
  for (size_t i = 0; i < coins_number; ++i)
  {
    std::cin >> coins[i];
    sum += coins[i];
  }

  std::sort(coins, coins + coins_number, std::greater<int>());

  int value = 0;
  for (size_t i = 0; i < coins_number; ++i)
  {
    value += coins[i];
    if ((value << 1) > sum)
    {
      std::cout << i + 1 << '\n';
      return 0;
    }
  }

  return 0;
}