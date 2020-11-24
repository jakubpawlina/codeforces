#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int students_number;
  std::cin >> students_number;

  int puzzles_number;
  std::cin >> puzzles_number;

  int puzzles[puzzles_number];

  for (int i = 0; i < puzzles_number; ++i)
  {
    std::cin >> puzzles[i];
  }

  std::sort(puzzles, puzzles + puzzles_number);

  int minimum_difference = INT_MAX;

  for (int i = 0; i < puzzles_number - students_number + 1; ++i)
  {
    minimum_difference = std::min(minimum_difference, puzzles[i + students_number - 1] - puzzles[i]);
  }

  std::cout << minimum_difference << '\n';

  return 0;
}
