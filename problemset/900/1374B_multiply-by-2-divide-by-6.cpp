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
		int n;
		std::cin >> n;
		int m = n;
		int c2 = 0, c3 = 0;
		while (!(m % 2)) m /= 2, ++c2;
		while (!(m % 3)) m /= 3, ++c3;
		if (m != 1 || c2 > c3) std::cout << "-1\n";
		else std::cout << 2 * c3 - c2 << '\n';
	}

	return 0;
}
