#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int operations_number;
  std::cin >> operations_number;

  int result = 0;

  while (operations_number--)
  {
    std::string operation;
    std::cin >> operation;
    if (operation == "++X" || operation == "X++") ++result;
    else if (operation == "--X" || operation == "X--") --result;    
  }
  
  std::cout << result << '\n';

  return 0;
}