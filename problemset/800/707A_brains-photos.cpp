#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n, m;
	std::cin >> n >> m;

	bool color = false;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			char pixel;
			std::cin >> pixel;
			if (pixel == 'C' || pixel == 'M' || pixel == 'Y') color = true;
		}
	}

	if (color) std::cout << "#Color\n";
	else std::cout << "#Black&White\n";

	return 0;
}
