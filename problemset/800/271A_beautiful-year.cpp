#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int current;
  std::cin >> current;

  while (true)
  {
    ++current;
    int thousands = current / 1000;
    int centuries = (current / 100) % 10;
    int decades = (current / 10) % 10;
    int years = (current % 10);

    if (thousands != centuries && thousands != decades && thousands != years && centuries != decades && centuries != years && decades != years)
    {
      std::cout << current << '\n';
      break;
    }
  }

  return 0;
}
