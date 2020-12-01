#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int lanterns_number;
	std::cin >> lanterns_number;

	int street_length;
	std::cin >> street_length;

	int lanterns[lanterns_number];

	for (int i = 0; i < lanterns_number; ++i)
	{
		std::cin >> lanterns[i];
	}

	std::sort(lanterns, lanterns + lanterns_number);

	int max = 2 * std::max(lanterns[0], street_length - lanterns[lanterns_number - 1]);

	for (int i = 1; i < lanterns_number; ++i)
	{
		max = std::max(max, lanterns[i] - lanterns[i - 1]);
	}

	std::cout.precision(10);
	std::cout << std::fixed << max / 2. << '\n';

	return 0;
}
