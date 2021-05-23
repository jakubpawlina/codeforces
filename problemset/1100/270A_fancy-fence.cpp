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
		int angle;
		std::cin >> angle;
		// a = 180 * (n - 2) / n
		// an = 180n - 360
		// n = 360 / (180 - a)
		if (360 % (180 - angle)) std::cout << "NO\n";
		else std::cout << "YES\n";
	}

	return 0;
}
