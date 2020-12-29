#pragma GCC optimize("O3")
#include <bits/stdc++.h>

#define pvar(x) std::cout << x << '\n'
#define pvars(x) std::cout << x << ' '
#define read(x) std::cin >> x

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int tests_number; read(tests_number);

	while (tests_number--)
	{
		unsigned int arrays_size; read(arrays_size);
		int maximum_swaps; read(maximum_swaps);
		std::vector <int> a(arrays_size);
		std::vector <int> b(arrays_size);
		for (auto &ai : a) read(ai);
		for (auto &bi : b) read(bi);
		std::sort(a.begin(), a.end());
		std::sort(b.rbegin(), b.rend());
		int result = 0;
		for (size_t i = 0; i < arrays_size; ++i)
		{
			if (i < maximum_swaps) result += std::max(a[i], b[i]);
			else result += a[i];
		}
		pvar(result);
	}

	return 0;
}
