#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int shovel_price, coin_denomination;
  std::cin >> shovel_price >> coin_denomination;

  for (int i = 1; i < 11; ++i)
  {
    if ((shovel_price * i) % 10 == coin_denomination || (shovel_price * i) % 10 == 0)
    {
      std::cout << i << '\n';
      return 0;
    }
  }

  return 0;
}