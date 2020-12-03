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
		int n, a, b;
		std::cin >> n >> a >> b;
		for (int i = 0; i < n; ++i)
		{
			std::cout << (char)('a' + i % b);
		}
		std::cout << '\n';
	}

	return 0;
}
