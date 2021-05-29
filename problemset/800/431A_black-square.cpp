#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int64_t a1, a2, a3, a4;
	std::cin >> a1 >> a2 >> a3 >> a4;

	std::string moves;
	std::cin >> moves;

	int64_t calories = 0;
	for (auto move : moves)
	{
		if (move == '1') calories += a1;
		if (move == '2') calories += a2;
		if (move == '3') calories += a3;
		if (move == '4') calories += a4;
	}

	std::cout << calories << '\n';

	return 0;
}
