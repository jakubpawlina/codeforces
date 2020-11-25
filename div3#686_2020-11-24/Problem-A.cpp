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
		int n; std::cin >> n;
		for (int i = 2; i <= n; ++i) std::cout << i << ' ';
		std::cout << "1\n";
	}

	return 0;
}
