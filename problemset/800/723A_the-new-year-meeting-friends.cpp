#pragma GCC optimize("O3")
#include <bits/stdc++.h>

#define min3(a, b, c) std::min(std::min(a, b), c)
#define max3(a, b, c) std::max(std::max(a, b), c)

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int x1, x2, x3;
	std::cin >> x1 >> x2 >> x3;

	std::cout << max3(x1, x2, x3) - min3(x1, x2, x3) << '\n';

	return 0;
}