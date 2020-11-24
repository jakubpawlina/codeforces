#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string text;
  std::cin >> text;

  std::transform(text.begin(), std::next(text.begin(), 1), text.begin(), ::toupper);

  std::cout << text << '\n';

  return 0;
}