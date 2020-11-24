#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int cubes_number;
  std::cin >> cubes_number;

  int cubes[cubes_number];

  for (int i = 0; i < cubes_number; ++i)
  {
    std::cin >> cubes[i];
  }

  std::sort(cubes, cubes + cubes_number);

  for (int i = 0; i < cubes_number; ++i)
  {
    std::cout << cubes[i] << " \n"[i == cubes_number - 1];
  }

  return 0;
}