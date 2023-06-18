#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>

int32_t main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	size_t n;
	std::cin >> n;

	int result = 0;
	for (size_t i = 0; i < n; ++i) {
		int s, x = 1;
		std::cin >> s;
		while (x * (x + 1) / 2 <= s) ++x;
		result ^= (x - 1);
	}

	std::cout << (result ? "NO" : "YES") << '\n';

	return 0;
}
