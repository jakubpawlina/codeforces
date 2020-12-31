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
		int hours, minutes;
		std::cin >> hours >> minutes;
		std::cout << 24 * 60 - hours * 60 - minutes << '\n';
	}


	return 0;
}
