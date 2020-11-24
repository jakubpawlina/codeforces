#pragma GCC optimize("O3")
#include <bits/stdc++.h>

bool lucky(int number)
{
  while (number)
  {
    int digit = number % 10;
    if (digit != 4 && digit != 7) return false;
    number /= 10;
  }
  return true;
}

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int number;
  std::cin >> number;

  if (lucky(number))
  {
    std::cout << "YES\n";
    return 0;
  }

  for (int i = 4; i < ((number + 2) >> 1); ++i)
  {
    if (!(number % i) && lucky(i))
    {
      std::cout << "YES\n";
      return 0;
    }
  }

  std::cout << "NO\n";

  return 0;
}