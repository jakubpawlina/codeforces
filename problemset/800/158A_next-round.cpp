#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int n, k;
  std::cin >> n >> k;

  int array[n];

  for (size_t i = 0; i < n; ++i)
  {
    std::cin >> array[i];
  }

  int result = 0;

  for (size_t i = 0; i < n; ++i)
  {
    if (array[i] >= array[k - 1] && array[i]) ++result;
  }

  std::cout << result << '\n';

  return 0;
}