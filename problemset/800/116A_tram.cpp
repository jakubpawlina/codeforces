#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int stops_number;
  std::cin >> stops_number;

  int maximum_capacity = 0;
  int current_capacity = 0;

  while (stops_number--)
  {
    int exiting_number;
    std::cin >> exiting_number;
    int entering_number;
    std::cin >> entering_number;
    current_capacity = current_capacity - exiting_number + entering_number;
    maximum_capacity = std::max(maximum_capacity, current_capacity);
  }

  std::cout << maximum_capacity << '\n';

  return 0;
}