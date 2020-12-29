#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int students_number;
	std::cin >> students_number;

	int k;
	std::cin >> k;

	int possible = 0;

	for (int i = 0; i < students_number; ++i)
	{
		int student;
		std::cin >> student;
		if (5 - student >= k) ++possible;
	}

	std::cout << possible / 3 << '\n';

	return 0;
}