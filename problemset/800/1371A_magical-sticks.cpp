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
		int n = 1;
		std::cin >> n;
		n = (n & 1) ? ((++n) >> 1) : (n >> 1);
		std::cout << n << '\n';
	}

	return 0;
}
