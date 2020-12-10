#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n, m;
	std::cin >> n >> m;

	for (int i = 1; i <= n; ++i)
	{
		if (i & 1)
		{
			for (int i = 0; i < m; ++i) std::cout << '#';
		}
		else if (!(i % 4))
		{
			std::cout << '#';
			for (int i = 1; i < m; ++i) std::cout << '.';
		}
		else
		{
			for (int i = 1; i < m; ++i) std::cout << '.';
			std::cout << '#';
		}
		std::cout << '\n';
	}

	return 0;
}
