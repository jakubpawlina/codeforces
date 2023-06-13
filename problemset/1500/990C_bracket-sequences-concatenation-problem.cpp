#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>


int32_t main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	unsigned int n;
	std::cin >> n;

	long long result = 0, additional_result = 0;

	std::map <int, int> opened, closed;

	for (size_t i = 0; i < n; ++i) {
		std::string seq;
		std::cin >> seq;

		int o = 0, c = 0;
		for (auto s : seq) {
			if (s == '(') ++o;
			else if (s == ')' && o > 0) --o;
			else ++c;
		}
		if (o && c) {
			continue;
		}
		if (!o && !c) {
			++result;
		} else if (o) {
			++opened[o];
			additional_result += closed[o];
		} else {
			++closed[c];
			additional_result += opened[c];
		}
	}	

	std::cout << result * result + additional_result << '\n';

	return 0;
}
