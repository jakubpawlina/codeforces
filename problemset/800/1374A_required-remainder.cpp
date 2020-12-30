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
		int x, y, n;
		std::cin >> x >> y >> n;
		int t = floor(n / x) * x + y;
		t = (t > n) ? t - x : t;
		std::cout << t << '\n';
	}

	return 0;
}
