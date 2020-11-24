#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int weight;
  std::cin >> weight;

  if (weight < 4 || weight & 1)
  {
    std::cout << "NO\n";
  }
  else std::cout << "YES\n";

  return 0;
}