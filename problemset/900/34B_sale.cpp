#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	unsigned tv_sets_amount, max_carry;
	std::cin >> tv_sets_amount >> max_carry;

	std::vector <int> tvs(tv_sets_amount);
	for (auto &tv : tvs) std::cin >> tv;

	std::sort(tvs.begin(), tvs.end());

	int result = 0;
	
	for (size_t tv_p = 0; tv_p < max_carry && tvs[tv_p] < 0; ++tv_p)
	{
		result += (tvs[tv_p] * -1);
	}

	std::cout << result << '\n';

	return 0;
}
