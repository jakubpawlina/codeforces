#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int limak_weight;
  std::cin >> limak_weight;

  int bob_weight;
  std::cin >> bob_weight;

  int years_needed = 0;

  while (limak_weight <= bob_weight)
  {
    ++years_needed;
    limak_weight *= 3;
    bob_weight *= 2;
  }

  std::cout << years_needed << '\n';

  return 0;
}