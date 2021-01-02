#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int added_tests_number;
	std::cin >> added_tests_number;

	std::vector <bool> added(3003);

	for (int i = 0; i < added_tests_number; ++i)
	{
		int current;
		std::cin >> current;
		added[current] = true;
	}

	for (int i = 1; i <= 3003; ++i)
	{
		if (!added[i])
		{
			std::cout << i << '\n';
			break;
		}
	}

	return 0;
}
