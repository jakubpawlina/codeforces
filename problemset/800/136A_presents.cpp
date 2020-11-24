#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  unsigned friends_number;
  std::cin >> friends_number;

  std::vector <int> presents (friends_number);

  for (size_t i = 0; i < friends_number; ++i)
  {
    int from_whom;
    std::cin >> from_whom;
    presents[from_whom - 1] = i + 1;
  }

  for (auto person : presents)
  {
    std::cout << person << " \n"[person == presents[presents.size() - 1]];
  }

  return 0;
}
