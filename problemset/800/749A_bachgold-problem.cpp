#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n;
	std::cin >> n;

	if (n & 1)
	{
		std::cout << 1 + (n - 3) / 2 << '\n';
		std::cout << "3 ";
		n -= 3;
		for (int i = 0; i < n / 2; ++i)
		{
			std::cout << "2 ";
		}
	}
	else
	{
		std::cout << n / 2 << '\n';
		for (int i = 0; i < n / 2; ++i)
		{
			std::cout << "2 ";
		}
	}

	std::cout << '\n';

	return 0;
}
