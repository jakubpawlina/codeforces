#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int a, b;
	std::cin >> a >> b;

	std::vector <int> operations;

	operations.push_back(b);

	while (b > a)
	{
		if (!(b % 2)) b /= 2;
		else if (b % 10 == 1) b /= 10;
		else
		{
			std::cout << "NO\n";
			return 0;
		}
		operations.push_back(b);
	}

	if (a == b)
	{
		std::cout << "YES\n";
		std::reverse(operations.begin(), operations.end());
		std::cout << operations.size() << '\n';
		for (auto element : operations) std::cout << element << ' ';
		std::cout << '\n';
		return 0;
	}

	std::cout << "NO\n";


	return 0;
}
