#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int tests_number;
  std::cin >> tests_number;

  while (tests_number--)
  {
    int array_size;
    std::cin >> array_size;
    int even = 0;
    int odd = 0;
    int bad_placed = 0;
    for (int i = 0; i < array_size; ++i)
    {
      int current_number;
      std::cin >> current_number;
      if ((current_number % 2) != (i % 2))
      {
        ++bad_placed;
      }
      if (current_number % 2 == 0) ++even;
      else ++odd;
    }
    if (odd == array_size / 2 && even + odd == array_size) std::cout << bad_placed / 2 << '\n';
    else std::cout << "-1\n";
  }

  return 0;
}