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
		int w, h, n;
		std::cin >> w >> h >> n;
		int cnt_w = 0, cnt_h = 0;
		while (!(w & 1)) ++cnt_w, w /= 2;
		while (!(h & 1)) ++cnt_h, h /= 2;
		if ((1 << (cnt_w + cnt_h)) >= n) std::cout << "YES\n";
		else std::cout << "NO\n";
	}

	return 0;
}
