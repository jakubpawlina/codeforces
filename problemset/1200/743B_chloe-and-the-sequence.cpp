#pragma GCC optimize("O3")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC optimization("unroll-loops")

#include <bits/stdc++.h>

int32_t main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n;
	long long k;

	std::cin >> n >> k;

	long long d = 1;
	int result = 0;

	while ((k + d) % (d << 1)) {
		d <<= 1;
		++result;
	}

	std::cout << result + 1 << '\n';

	return 0;
}
