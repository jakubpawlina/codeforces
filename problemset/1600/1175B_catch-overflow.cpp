#pragma GCC optimize("O3")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC optimization("unroll-loops")

#include <bits/stdc++.h>

int32_t main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int lines_number;
	std::cin >> lines_number;

	std::stack <long long> values;
	values.push(1);

	long long result = 0;

	for (int i = 0; i < lines_number; ++i) {
		std::string command;
		std::cin >> command;
		if (command == "add") {
			result += values.top();
		} else if (command == "end") {
			values.pop();
		} else if (command == "for") {
			int n;
			std::cin >> n;
			values.push(std::min(values.top() * n, (1LL << 32)));
		}
	}

	if (result >= (1LL << 32)) {
		std::cout << "OVERFLOW!!!\n";
	} else {
		std::cout << result << '\n';
	}

	return 0;
}
