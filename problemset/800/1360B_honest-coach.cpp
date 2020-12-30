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
		int athletes_number;
		std::cin >> athletes_number;
		std::vector <int> athletes(athletes_number);
		for (auto &athlete : athletes) std::cin >> athlete;
		std::sort(athletes.begin(), athletes.end());
		int result = athletes[athletes_number - 1] - athletes[0];
		for (int i = 1; i < athletes_number; ++i)
		{
			result = std::min(result, athletes[i] - athletes[i - 1]);
		}
		std::cout << result << '\n';
	}

	return 0;
}
