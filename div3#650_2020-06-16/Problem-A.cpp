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
    std::string current_b;
    std::cin >> current_b;
    for (int i = 0; i < current_b.length(); ++i)
    {
      if (!(i & 1)) std::cout << current_b[i];
      else continue;
    }
    std::cout << current_b[current_b.length() - 1] << '\n';
  }
  
  return 0;
}