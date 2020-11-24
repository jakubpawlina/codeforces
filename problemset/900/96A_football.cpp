#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string players;
  std::cin >> players;

  int one_team = 1;

  for (size_t i = 1; i < players.length(); ++i)
  {
    if (players[i] == players[i - 1]) ++one_team;
    if (one_team >= 7)
    {
      std::cout << "YES\n";
      return 0;
    }
    if (players[i] != players[i - 1]) one_team = 1;
  }

  std::cout << "NO\n";

  return 0;
}