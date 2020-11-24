#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int layers_number;
  std::cin >> layers_number;

  for (int i = 0; i < layers_number; ++i)
  {
    if (i & 1) std::cout << "I love ";
    else std::cout << "I hate ";
    if (i == layers_number - 1) std::cout << "it\n";
    else std::cout << "that ";
  }

  return 0;
}
