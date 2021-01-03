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
		int goods_number;
		std::cin >> goods_number;
		int sum = 0;
		for (int i = 0; i < goods_number; ++i)
		{
			int current_price;
			std::cin >> current_price;
			sum += current_price;
		}
		std::cout << (sum + goods_number - 1) / goods_number << '\n';
	}

	return 0;
}
