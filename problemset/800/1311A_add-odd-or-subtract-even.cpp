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
		int a, b;
		std::cin >> a >> b;
		if (a == b) std::cout << "0\n";
		else if ((!((a - b) & 1) && (a > b)) || (((a - b) & 1) && (b > a))) std::cout << "1\n";
		else std::cout << "2\n";
	}

	return 0;
}
