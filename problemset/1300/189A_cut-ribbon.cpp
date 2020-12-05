#pragma GCC optimize("O3")
#include <bits/stdc++.h>

std::vector <int> result;

int cut_ribbon(int n, int a, int b, int c)
{
	if (n < 0) return INT_MIN;
	if (n == 0) return 0;
	if (result[n] != -1) return result[n];
	return result[n] = std::max(cut_ribbon(n - a, a, b, c), std::max(cut_ribbon(n - b, a, b, c), cut_ribbon(n - c, a, b, c))) + 1;
}

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n, a, b, c;
	std::cin >> n >> a >> b >> c;

	result.resize(n + 1, -1);

	std::cout << cut_ribbon(n, a, b, c) << '\n';

	return 0;
}
