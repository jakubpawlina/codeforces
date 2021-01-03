#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int x;
	std::cin >> x;

	std::cout << __builtin_popcount(x) << '\n';

	return 0;
}
