#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int numbers_amount;
  std::cin >> numbers_amount;

  int even = 0;
  int odd = 0;

  int result = 0;
  int even_position = 0;
  int odd_position = 0;

  for (int i = 1; i <= numbers_amount; ++i)
  {
    int number;
    std::cin >> number;
    if (number & 1) 
    {
      ++odd;
      odd_position = i;
    }
    else
    {
      ++even;
      even_position = i;
    }
    if (even && odd > 1 && !result)
    {
      result = even_position;
    }
    if (odd && even > 1 && !result)
    {
      result = odd_position;
    }
  }

  std::cout << result << '\n';

  return 0;
}