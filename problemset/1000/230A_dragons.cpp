#pragma GCC optimize("O3")
#include <bits/stdc++.h>

typedef std::pair <int, int> pair;

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int initial_strength;
	std::cin >> initial_strength;

	int dragons_number;
	std::cin >> dragons_number;

	std::vector <pair> dragons;

	for (int i = 0 ; i < dragons_number; ++i)
	{
		int dragon_strength, defeating_bonus;
		std::cin >> dragon_strength >> defeating_bonus;
		dragons.push_back({dragon_strength, defeating_bonus});
	}

	std::sort(dragons.begin(), dragons.end());

	int current_strength = initial_strength;

	for (int i = 0; i < dragons_number; ++i)
	{
		if (dragons[i].first >= current_strength)
		{
			std::cout << "NO\n";
			return 0;
		}
		current_strength += dragons[i].second;
	}

	std::cout << "YES\n";

	return 0;
}
