#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	unsigned shops_number;
	std::cin >> shops_number;

	std::vector <int> prices(shops_number);
	for (auto &price : prices) std::cin >> price;

	std::sort(prices.begin(), prices.end());

	unsigned days_number;
	std::cin >> days_number;

	while (days_number--)
	{
		int coins_to_spend;
		std::cin >> coins_to_spend;
		std::vector <int>::iterator up = std::upper_bound(prices.begin(), prices.end(), coins_to_spend);
		std::cout << (up - prices.begin()) << '\n';
	}


	return 0;
}
