#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int gcd = 0, max = 0, n, a;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> a;
		gcd = (!gcd) ? a : std::__gcd(a, gcd); 
		max = std::max(a, max);
	}
	std::cout << ((((max / gcd - n) & 1)) ? "Alice" : "Bob") << '\n';
	return 0;
}
