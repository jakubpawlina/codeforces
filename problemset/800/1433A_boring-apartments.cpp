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
		int last_apartment;
		std::cin >> last_apartment;
		int digit = last_apartment % 10;
		int length = 0;
		while (last_apartment)
		{
			last_apartment /= 10;
			++length;
		}
		std::cout << (digit - 1) * 10 + (length * (length + 1)) / 2 << '\n';
	}


	return 0;
}
