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
		int a, b, c, n;
		std::cin >> a >> b >> c >> n;
		int max = std::max(a, std::max(b, c));
		if (a != max) n = n - (max - a);
		if (b != max) n = n - (max - b);
		if (c != max) n = n - (max - c);
		if (!(n % 3) && n >= 0) std::cout << "YES\n";
		else std::cout << "NO\n";
	}
	
	return 0;
}
