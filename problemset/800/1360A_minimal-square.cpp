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
		int a, b; std::cin >> a >> b;
		if (a > b) a ^= b, b = a ^ b, a ^= b;
		a = std::max(2 * a, b); a *= a;
		std::cout << a << '\n';
	}

	return 0;
}