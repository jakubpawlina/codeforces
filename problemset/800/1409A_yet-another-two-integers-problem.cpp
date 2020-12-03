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
		int a, b;
		std::cin >> a >> b;
		std::cout << (std::abs(a - b) + 9) / 10 << '\n';
	}

	return 0;
}
