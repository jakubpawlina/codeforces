#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int rooms_number;
  std::cin >> rooms_number;

  int possible_rooms = 0;

  while (rooms_number--)
  {
    int people_number;
    std::cin >> people_number;
    int maximum_people;
    std::cin >> maximum_people;
    if (people_number + 2 <= maximum_people) ++possible_rooms;
  }
  
  std::cout << possible_rooms << '\n';

  return 0;
}