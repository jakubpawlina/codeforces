#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string number;
  std::cin >> number;

  int lucky_digits = 0;

  for (auto digit : number)
  {
    if (digit == '4' || digit == '7') ++lucky_digits;
    if (lucky_digits > 7)
    {
      std::cout << "NO\n";
      return 0;
    }
  }

  if (lucky_digits == 4 || lucky_digits == 7) std::cout << "YES\n";
  else std::cout << "NO\n";

  return 0;
}