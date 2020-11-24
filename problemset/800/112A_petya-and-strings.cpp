#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string first;
  std::string second;

  std::cin >> first;
  std::cin >> second;

  std::transform(first.begin(), first.end(), first.begin(), ::toupper);
  std::transform(second.begin(), second.end(), second.begin(), ::toupper);

  if (first < second) std::cout << "-1\n";
  else if (first > second) std::cout << "1\n";
  else std::cout << "0\n";

  return 0;
}