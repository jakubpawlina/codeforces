#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int polygons_number;
	std::cin >> polygons_number;

	while (polygons_number--)
	{
		int n_sided;
		std::cin >> n_sided;
		if (!(n_sided % 4)) std::cout << "YES\n"; else std::cout << "NO\n";
	}


	return 0;
}
