#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string number1;
  std::cin >> number1;
  std::string number2;
  std::cin >> number2;

  for (size_t i = 0; i < number1.length(); ++i)
  {
    std::cout << (((int)number1[i] - 48) ^ ((int)number2[i] - 48));
  }

  return 0;
}