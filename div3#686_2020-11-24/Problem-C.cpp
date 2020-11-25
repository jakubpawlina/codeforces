#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int elements[200005];

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int tests_number;
	std::cin >> tests_number;

	while (tests_number--)
	{
		int n;
		std::cin >> n;
		std::vector <int> blocks;
		std::cin >> elements[0];
		for (int i = 1; i < n; ++i)
		{
			std::cin >> elements[i];
			if (elements[i] != elements[i - 1]) blocks.push_back(elements[i - 1]);
		}
		blocks.push_back(elements[n - 1]);

		std::map <int, int> occurrences;
		for (auto &i : blocks)
		{
			++occurrences[i];
		}
		int result = n;
		for (auto &i : blocks)
		{
			result = std::min(result, occurrences[i] + 1 - (blocks.front() == i) - (blocks.back() == i));
		}
		std::cout << result << '\n';
	}

	return 0;
}
