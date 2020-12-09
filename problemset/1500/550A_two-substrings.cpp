#pragma GCC optimize("O3")
#include <bits/stdc++.h>

bool check(std::string input, std::string first, std::string second)
{
	size_t pos = input.find(first);
	if (pos == std::string::npos) return 0;
	else input[pos] = 'X', input[pos + 1] = 'X';
	pos = input.find(second);
	if (pos == std::string::npos) return 0;
	else input[pos] = 'X', input[pos + 1] = 'X';
	return 1;
}

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::string input;
	std::cin >> input;

	if (check(input, "AB", "BA") || check(input, "BA", "AB"))
		std::cout << "YES\n";
	else std::cout << "NO\n";

	return 0;
}
