#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int tests_number;
	std::cin >> tests_number;

	while (tests_number--)
	{
		int tables_number;
		std::cin >> tables_number;
		int minimum_distance;
		std::cin >> minimum_distance;
		std::string restaurant;
		std::cin >> restaurant;
		int occupied_tables = 0;
		int current_free = 0;
		int result = 0;
		int total_occupied = 0;
		for (int i = 0; i < restaurant.length(); ++i)
		{
			if (restaurant[i] == '1') ++total_occupied;
		}
		if (total_occupied == 0)
		{
			std::cout << (tables_number + minimum_distance) / (minimum_distance + 1) << '\n';
			continue;
		}
		for (int i = 0; i < restaurant.length(); ++i)
		{
			if (restaurant[i] == '0') ++current_free;
			if (restaurant[i] == '1' || i == restaurant.length() - 1)
			{
				if (occupied_tables == 0) current_free -= minimum_distance;
				else if (occupied_tables == total_occupied) current_free -= minimum_distance;
				else if (occupied_tables) current_free -= (minimum_distance * 2);
				result += std::max(0, ((current_free + minimum_distance) / (minimum_distance + 1)));
				current_free = 0;
				++occupied_tables;
			}
		}
		std::cout << result << '\n';
	}

	return 0;
}
