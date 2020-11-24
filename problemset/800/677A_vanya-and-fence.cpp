#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int friends_number;
  std::cin >> friends_number;

  int fence_height;
  std::cin >> fence_height;

  int minimum_road_width = 0;

  while (friends_number--)
  {
    int friend_height;
    std::cin >> friend_height;
    if (friend_height > fence_height) minimum_road_width += 2;
    else ++minimum_road_width;
  }

  std::cout << minimum_road_width << '\n';

  return 0;
}