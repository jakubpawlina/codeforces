#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int events_number;
  std::cin >> events_number;

  int free_policemen = 0, result = 0;

  for (int i = 0; i < events_number; ++i)
  {
    int event; std::cin >> event;
    if (event > 0) free_policemen += event;
    else
    {
      if (free_policemen > 0) --free_policemen;
      else ++result;
    }
  }

  std::cout << result << '\n';

  return 0;
}