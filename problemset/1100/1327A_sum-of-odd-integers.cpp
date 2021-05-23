// #pragma GCC optimize("O3")
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
		int64_t n, k;
		std::cin >> n >> k;
		// 1 + 3 + 5 + 7 + ... = k ^ 2
		// n =? k ^ 2 + m * 2
		if (n - k * k < 0 || ((n - k * k) & 1)) std::cout << "NO\n";
		else std::cout << "YES\n";
	}

	return 0;
}
