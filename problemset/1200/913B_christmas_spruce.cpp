#pragma GCC optimize("O3")
#include <bits/stdc++.h>

#define pvar(x) std::cout << x << '\n'
#define pvars(x) std::cout << x << ' '
#define read(x) std::cin >> x

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int vertices_number;
	read(vertices_number);

	std::vector <int> parent(vertices_number);
	std::vector <int> degree(vertices_number);
	std::vector <int> leaf_children(vertices_number);

	for (int i = 1; i < vertices_number; ++i)
	{
		read(parent[i]);
		--parent[i];
		++degree[parent[i]];
	}

	for (int i = 0; i < vertices_number; ++i)
	{
		if (degree[i] == 0) ++leaf_children[parent[i]];
	}

	for (int i = 0; i < vertices_number; ++i)
	{
		if (degree[i] > 0 && leaf_children[i] < 3)
		{
			pvar("No");
			return 0;
		}
	}

	pvar("Yes");

	return 0;
}
