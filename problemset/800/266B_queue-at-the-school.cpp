#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int children_number;
  std::cin >> children_number;

  int remaining_time;
  std::cin >> remaining_time;

  std::string queue;
  std::cin >> queue;

  while (remaining_time--)
  {
    for (int i = 1; i < children_number; ++i)
    {
      if (queue[i - 1] == 'B' && queue[i] == 'G')
      {
        std::swap(queue[i - 1], queue[i]);
        ++i;
      }
    }
  }
  
  std::cout << queue << '\n';

  return 0;
}