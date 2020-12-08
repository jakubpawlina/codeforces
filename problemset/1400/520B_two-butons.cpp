#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n, m;
	std::cin >> n >> m;

	int result = 0;

	while (n < m)
	{
		(m & 1) ? (++m) : (m >>= 1);
		++result;
	}

	std::cout << result + n - m << '\n';

	return 0;
}
