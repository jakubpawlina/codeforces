#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>

int32_t main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::string bill_content;
	std::cin >> bill_content;

	std::vector <std::string> prices;
	std::string current = "";
	for (size_t i = 0; i < bill_content.size(); ++i) {
		char c = bill_content[i];
		if (isdigit(c) || c == '.') {
			current += c;
		} else {
			if (!current.empty()) {
				prices.emplace_back(current);
			}
			current = "";
		}
	}
	if (!current.empty()) {
		prices.emplace_back(current);
	}

	long long total_cents = 0;

	for (auto price : prices) {
		std::regex delimiter("\\.");
		std::vector <std::string> splitted(std::sregex_token_iterator(price.begin(), price.end(), delimiter, -1), std::sregex_token_iterator());
		if (splitted.size() > 1 && splitted[splitted.size() - 1].size() == 2) {
			total_cents += std::stoi(splitted[splitted.size() - 1]);
			splitted.pop_back();
		}
		long long multiplier = 100;
		for (int i = splitted.size() - 1; i >= 0; --i) {
			total_cents += std::stoi(splitted[i]) * multiplier;
			multiplier *= 1000;
		}
	}

	std::string result = "";
	if (total_cents % 100) {
		result = std::to_string(total_cents % 100);
		if (result.size() == 1) {
			result = "0" + result;
		}
	}
	total_cents /= 100;
	if (total_cents == 0) {
		result = "0." + result;
	}
	while (total_cents) {
		std::string tmp = std::to_string(total_cents % 1000);
		total_cents /= 1000;
		if (total_cents) {
			tmp = std::string(3 - tmp.size(), '0') + tmp;
		}
		result = (result.empty()) ? tmp : tmp + "." + result;
	}

	std::cout << result << '\n';

	return 0;
}
