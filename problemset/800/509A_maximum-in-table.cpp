#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int array[16][16];

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n;
	std::cin >> n;

	for (int i = 1; i <= n; ++i) array[1][i] = 1;
	for (int i = 1; i <= n; ++i) array[i][1] = 1;

	int max = 1;

	for (int i = 2; i <= n; ++i)
	{
		for (int j = 2; j <= n; ++j)
		{
			array[i][j] = array[i - 1][j] + array[i][j - 1];
			max = std::max(max, array[i][j]);
		}
	}

	std::cout << max << '\n';

	return 0;
}
