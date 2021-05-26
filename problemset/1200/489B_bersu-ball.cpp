#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	unsigned boys_number;
	std::cin >> boys_number;

	std::vector <unsigned> boys(boys_number);
	for (auto &boy : boys) std::cin >> boy;

	unsigned girls_number;
	std::cin >> girls_number;

	std::vector <unsigned> girls(girls_number);
	for (auto &girl : girls) std::cin >> girl;

	std::sort(boys.begin(), boys.end());
	std::sort(girls.begin(), girls.end());

	int last_girl = 0, result = 0;

	for (size_t b = 0; b < boys_number; ++b)
	{
		for (size_t g = last_girl; g < girls_number; ++g)
		{
			int diff = boys[b] - girls[g];
			diff = (diff < 0) ? diff * -1 : diff;
			if (diff <= 1)
			{
				++result;
				last_girl = g + 1;
				break;
			}
		}
	}

	std::cout << result << '\n';

	return 0;
}
