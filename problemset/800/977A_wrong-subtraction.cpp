#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int number;
  std::cin >> number;

  int subtractions_number;
  std::cin >> subtractions_number;

  while (subtractions_number--)
  {
    if (number % 10) --number;
    else number /= 10;
  }

  std::cout << number << '\n';

  return 0;
}