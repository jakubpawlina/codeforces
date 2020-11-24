#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string hq9plus_source_code;
  std::cin >> hq9plus_source_code;

  for (auto instruction : hq9plus_source_code)
  {
    if (instruction == 'H' || instruction == 'Q' || instruction == '9')
    {
      std::cout << "YES\n";
      return 0;
    }
  }

  std::cout << "NO\n";

  return 0;
}