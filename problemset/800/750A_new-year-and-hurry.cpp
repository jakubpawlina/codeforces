#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n; std::cin >> n;
	int k; std::cin >> k;

	std::cout << std::min((int) floor(-1 + sqrt(8 * ((240 - k) / 5) + 1)) / 2, n) << '\n';

	return 0;
}