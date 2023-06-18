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
	std::vector <double> radii(n);
	for (auto &radius : radii) {
		std::cin >> radius;
	}
	std::sort(radii.begin(), radii.end());
	
	double result = 0;
	int multiplier = -1;
	if (n & 1) multiplier *= -1;
	for (auto radius : radii) {
		result += static_cast<double>(multiplier) * radius * radius;
		multiplier *= -1;
	}

	std::cout.precision(15);
	std::cout << std::fixed << result * 3.141592653589793238 << '\n';

	return 0;
}
