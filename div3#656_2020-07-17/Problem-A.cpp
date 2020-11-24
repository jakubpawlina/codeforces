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
		int x0, y0, z0;
		std::cin >> x0 >> y0 >> z0;

		int x = std::max(std::max(x0, y0), z0);
		int z = std::min(std::min(x0, y0), z0);
		int y = x0 + y0 + z0 - x - z;

		if (x == y && y == z)
		{
			std::cout << "YES\n" << x << ' ' << y << ' ' << z << '\n';
		}
		else if (x == y && y > z)
		{
			std::cout << "YES\n" << x << ' ' << z << ' ' << 1 << '\n';
		}
		else
		{
			std::cout << "NO\n";
		}

	}

  return 0;
}
