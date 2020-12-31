#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int candles_number;
	std::cin >> candles_number;

	int reuse_number;
	std::cin >> reuse_number;

	int used = 0;
	int result = 0;

	while (candles_number--)
	{
		++used;
		if (used == reuse_number)
		{
			used = 0;
			++candles_number;
		}
		++result;
	}

	std::cout << result << '\n';

	return 0;
}
