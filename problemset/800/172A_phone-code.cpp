#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>

int32_t main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n;
	std::cin >> n;

	std::string prefix;
	std::cin >> prefix;

	for (int i = 1; i < n; ++i) {
		std::string current;
		std::cin >> current;
		for (size_t j = 0; j < prefix.size(); ++j) {
			if (current[j] != prefix[j]) {
				prefix = prefix.substr(0, j);
				break;
			}
		}
	}
	std::cout << prefix.size() << '\n';

	return 0;
}
