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
		int coins_number;
		std::cin >> coins_number;

		int64_t sum1 = (1 << coins_number);
		for (int i = 1; i < coins_number / 2; ++i)
		{
			sum1 += (1 << i);
		}
		int64_t sum2 = 0;
		for (int i = coins_number / 2; i < coins_number; ++i)
		{
			sum2 += (1 << i);
		}
		std::cout << std::abs(sum1 - sum2) << '\n';
	}

	return 0;
}
