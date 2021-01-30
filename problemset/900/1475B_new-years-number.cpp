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
		int number;
		std::cin >> number;
		int c2021 = number % 2020;
		int c2020 = number / 2020;
		if (c2021 <= c2020) std::cout << "YES\n";
		else std::cout << "NO\n";
	}


	return 0;
}
