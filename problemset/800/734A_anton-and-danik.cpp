#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int games_number;
  std::cin >> games_number;

  std::string games_results;
  std::cin >> games_results;

  int won_by_anton = 0;

  for (auto result : games_results)
  {
    if (result == 'A') ++won_by_anton;
  }

  if ((won_by_anton << 1) > games_number) std::cout << "Anton\n";
  else if ((won_by_anton << 1) == games_number) std::cout << "Friendship\n";
  else std::cout << "Danik\n";

  return 0;
}