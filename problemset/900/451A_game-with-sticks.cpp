#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n, m;
	std::cin >> n >> m;

	if (std::min(n, m) & 1) std::cout << "Akshat\n";
	else std::cout << "Malvika\n";

	return 0;
}
