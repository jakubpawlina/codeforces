#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string berlandish;
  std::string birlandish;

  std::cin >> berlandish;
  std::cin >> birlandish;

  std::reverse(berlandish.begin(), berlandish.end());

  if (berlandish == birlandish) std::cout << "YES\n";
  else std::cout << "NO\n";

  return 0;
}