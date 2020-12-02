#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n;
	std::cin >> n;

	std::cout << (n / 100) + ((n % 100)) / 20 + ((n % 20) / 10) + ((n % 10) / 5) + (n % 5) << '\n';


	return 0;
}
