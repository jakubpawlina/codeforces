#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int problems_number;
  std::cin >> problems_number;

  int result = 0;

  while (problems_number--)
  {
    short petya, vasya, tonya;
    std::cin >> petya >> vasya >> tonya;
    short sum = petya + vasya + tonya;
    if (sum >= 2) ++result;  
  }
  
  std::cout << result << '\n';

  return 0;
}