#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int contests_number;
	std::cin >> contests_number;

	int current_max, current_min;

	std::cin >> current_max;
	current_min = current_max;

	int amazing_performances = 0;

	for (int i = 1; i < contests_number; ++i)
	{
		int current_contest;
		std::cin >> current_contest;
		if (current_contest > current_max) current_max = current_contest, ++amazing_performances;
		if (current_contest < current_min) current_min = current_contest, ++amazing_performances;
	}

	std::cout << amazing_performances << '\n';

	return 0;
}
