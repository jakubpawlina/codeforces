#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  long long frogs_number;
  std::cin >> frogs_number;

  while (frogs_number--)
  {
    long long forwards_distance;
    std::cin >> forwards_distance;
    long long backwards_distance;
    std::cin >> backwards_distance;
    long long jumps_number;
    std::cin >> jumps_number;
    long long calculated_position = (forwards_distance - backwards_distance) * (jumps_number >> 1);
    if (jumps_number & 1)
    {
      calculated_position += forwards_distance;
    }
    std::cout << calculated_position << '\n';
  }

  return 0;
}