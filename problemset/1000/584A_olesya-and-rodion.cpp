#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n, t;
	std::cin >> n >> t;

	if (t == 10)
	{
		if (n == 1) std::cout << "-1\n";
		else
		{
			for (int i = 1; i < n; ++i) std::cout << 1;
			std::cout << "0\n";
		}
		return 0;
	}

	for (int i = 0; i < n; ++i) std::cout << t;
	
	return 0;
}
