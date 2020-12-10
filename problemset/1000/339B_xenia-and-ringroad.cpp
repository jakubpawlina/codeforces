#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int64_t houses_number, tasks_number;
	std::cin >> houses_number >> tasks_number;

	int64_t last_house;
	std::cin >> last_house;

	int64_t result = last_house - 1;

	for (int64_t i = 1; i < tasks_number; ++i)
	{
		int64_t house;
		std::cin >> house;
		if (house > last_house) result += house - last_house;
		else if (house < last_house) result += (houses_number + house - last_house);
		last_house = house;
	}

	std::cout << result << '\n';

	return 0;
}
