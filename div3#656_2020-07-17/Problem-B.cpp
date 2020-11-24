#pragma GCC optimize("O3")
#include <bits/stdc++.h>

// #define DEBUG
#define value(x) std::cerr << "Value of \"" << #x << "\" is " << x << '\n';
#define unto(i, begin, end) for (int i = begin; i < end; ++i)
#define print_array(array, begin, end) unto(i, begin, end) std::cout << array[i] << " \n"[i == end - 1];

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  #ifdef DEBUG
    printf("DEBUG was defined at compile time\n");
  #endif // DEBUG

  int tests_number;
	std::cin >> tests_number;

	while (tests_number--)
	{
		std::array <int, 52> placed;
		placed.fill(0);
		int permutation_size;
		std::cin >> permutation_size;
		for (int i = 0; i < permutation_size * 2; ++i)
		{
			int current_number;
			std::cin >> current_number;
			if (placed[current_number])
			{
				std::cout << current_number << ' ';
			}
			++placed[current_number];
		}
		std::cout << '\n';
	}

  return 0;
}
