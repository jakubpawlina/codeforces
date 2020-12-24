#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int yellow, blue, red;
	std::cin >> yellow >> blue >> red;

	yellow = std::min(yellow, std::min(red - 1, blue) - 1);

	std::cout << 3 * yellow + 3 << '\n';

	return 0;
}
