#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int tests_number;
	std::cin >> tests_number;

	while (tests_number--)
	{
		int n, c0, c1, h;
		std::cin >> n >> c0 >> c1 >> h;
		std::string s;
		std::cin >> s;
		int result = 0;
		for (auto digit : s)
		{
			if (digit == '1') result += std::min(c1, c0 + h);
			else result += std::min(c0, c1 + h);
		}
		std::cout << result << '\n';
	}


	return 0;
}
