#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string operation;
  std::cin >> operation;

  std::sort(operation.begin(), operation.end(), std::less<char>());

  operation.erase(0, ((operation.length() - 1) >> 1));

  for (size_t i = 0; i < operation.length(); ++i)
  {
    std::cout << operation[i] << "+\n"[i == operation.length() - 1];
  }

  return 0;
}