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
		int participants_number;
		std::cin >> participants_number;

		std::vector <int> numbers(participants_number);
		std::map <int, int> frequency;

		for (auto &number : numbers)
		{
			std::cin >> number;
			++frequency[number];
		}

		int winner = -1;

		for (int i = 0; i < participants_number; ++i)
		{
			if (frequency[numbers[i]] == 1 && (winner < 0 || numbers[i] < numbers[winner]))
			{
				winner = i;
			}
		}
		if (winner >= 0) ++winner;
		std::cout << winner << '\n';
	}

	return 0;
}
