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
		unsigned int gifts_number;
		std::cin >> gifts_number;
		std::vector <int> candies(gifts_number);
		int min_candies = INT_MAX;
		for (auto &candy : candies)
		{
			std::cin >> candy;
			min_candies = std::min(min_candies, candy);
		}
		std::vector <int> oranges(gifts_number);
		int min_oranges = INT_MAX;
		for (auto &orange : oranges)
		{
			std::cin >> orange;
			min_oranges = std::min(min_oranges, orange);
		}
		int64_t minimum_moves = 0;
		for (size_t i = 0; i < gifts_number; ++i)
		{
			candies[i] -= min_candies;
			oranges[i] -= min_oranges;
			minimum_moves += std::max(candies[i], oranges[i]);
		}
		std::cout << minimum_moves << '\n';
	}

	return 0;
}
