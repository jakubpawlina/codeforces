#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  long long first_banana_cost;
  std::cin >> first_banana_cost;

  long long initial_dollars_number;
  std::cin >> initial_dollars_number;

  long long wanted_bananas_number;
  std::cin >> wanted_bananas_number;

  long long sum = (first_banana_cost * wanted_bananas_number * (wanted_bananas_number + 1) >> 1);

  if (sum > initial_dollars_number)
  {
    std::cout << sum - initial_dollars_number << '\n';
  }
  else
  {
    std::cout << "0\n";
  }

  return 0;
}