#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int house_coordinate;
  std::cin >> house_coordinate;

  int result = house_coordinate / 5;
  if (house_coordinate % 5) ++result;

  std::cout << result << '\n';

  return 0;
}