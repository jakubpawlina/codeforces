#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::string codeforces = "codeforces";

	std::array <int64_t, 10> occurences;
	occurences.fill(1);

	int64_t min_subsequences;
	std::cin >> min_subsequences;

	int64_t current_subsequences = 1;
	int64_t position = 0;

	while (current_subsequences < min_subsequences)
	{
		++occurences[position];
		position = (++position == 10) ? 0 : position;

		current_subsequences = 1;
		for (size_t i = 0; i < 10; ++i)
		{
			current_subsequences *= occurences[i];
		}
	}

	for (size_t i = 0; i < 10; ++i)
	{
		for (int64_t j = 0; j < occurences[i]; ++j)
		{
			std::cout << codeforces[i];
		}
	}

	std::cout << '\n';

	return 0;
}
