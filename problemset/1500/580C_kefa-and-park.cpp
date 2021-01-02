#pragma GCC optimize("O3")
#include <bits/stdc++.h>

#define MAXN 1000006

std::vector <int> graph[MAXN];
bool cats[MAXN];
bool visited[MAXN];

int result = 0;

void dfs(int vertex, int max_cats, int consecutive_cats)
{
	visited[vertex] = 1;
	if (cats[vertex]) ++consecutive_cats;
	else consecutive_cats = 0;
	if (consecutive_cats > max_cats) return;
	for (auto v : graph[vertex])
	{
		if (!visited[v])
		{
			dfs(v, max_cats, consecutive_cats);
		}
	}
	if (graph[vertex].size() == 1 && vertex != 1) ++result;
}

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int vertices_number;
	std::cin >> vertices_number;

	int consecutive_cats_number;
	std::cin >> consecutive_cats_number;

	for (int i = 1; i <= vertices_number; ++i)
	{
		std::cin >> cats[i];
	}

	for (int i = 1; i < vertices_number; ++i)
	{
		int a, b;
		std::cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	int current_cats = 0;

	dfs(1, consecutive_cats_number, current_cats);

	std::cout << result << '\n';

	return 0;
}
