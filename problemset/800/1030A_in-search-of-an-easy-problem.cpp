#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int people_number;
  std::cin >> people_number;

  bool hard = 0;

  while (people_number--)
  {
    bool opinion;
    std::cin >> opinion;
    hard |= opinion;
  }
  
  if (hard) std::cout << "HARD\n";
  else std::cout << "EASY\n";

  return 0;
}