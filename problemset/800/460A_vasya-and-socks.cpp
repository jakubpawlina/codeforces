#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n, m;
	std::cin >> n >> m;

	std::cout << n + (n - 1) / (m - 1) << '\n';

	return 0;
}
