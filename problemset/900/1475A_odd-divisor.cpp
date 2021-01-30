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
		int64_t n;
		std::cin >> n;
		if (n & (n - 1)) std::cout << "YES\n";
		else std::cout << "NO\n";
	}

	return 0;
}
