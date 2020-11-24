#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string nickname;
  std::cin >> nickname;

  std::unordered_map<char, int> used;

  for (auto letter : nickname)
  {
    ++used[letter];
  }

  if (!(used.size() & 1))
  {
    std::cout << "CHAT WITH HER!\n";
  }
  else
  {
    std::cout << "IGNORE HIM!\n";
  }
  
  return 0;
}