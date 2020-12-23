#pragma GCC optimize("O3")
#include <bits/stdc++.h>

#define pvar(x) std::cout << x << '\n'
#define pvars(x) std::cout << x << ' '
#define read(x) std::cin >> x
#define outprec(x) std::cout.precision(x)

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int cells_number; read(cells_number);
	int destination; read(destination);

	std::vector <int> transport(cells_number + 1);

	for (size_t i = 1; i < cells_number; ++i) read(transport[i]);

	int possible = 1;
	while (possible < destination) possible += transport[possible];

	if (possible == destination) pvar("YES"); else pvar("NO");

	return 0;
}
