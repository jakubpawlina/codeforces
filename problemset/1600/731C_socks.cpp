#include <bits/stdc++.h>
 
std::vector <int> graph[1000100];
std::array <bool, 1000100> visited = {0};
 
void dfs(int vertex, const std::vector <int> &socks_colors, std::map <int, int> &colors)
{
	visited[vertex] = 1;
	colors[socks_colors[vertex - 1]]++;
	for (size_t i = 0; i < graph[vertex].size(); ++i)
	{
		if (!visited[graph[vertex][i]])
		{
			dfs(graph[vertex][i], socks_colors, colors);
		}
	}
}
 
int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
 
	int socks_number, days_number, colors_number;
	std::cin >> socks_number >> days_number >> colors_number;
 
	std::vector <int> socks_colors(socks_number);
	for (auto &i : socks_colors) std::cin >> i;
 
	for (int i = 0; i < days_number; ++i)
	{
		int left, right;
		std::cin >> left >> right;
		graph[left].push_back(right);
		graph[right].push_back(left);
	}
 
	int result = 0;
 
	for (int i = 1; i <= socks_number; ++i)
	{
		if (!visited[i])
		{
			std::map <int, int> colors;
			dfs(i, socks_colors, colors);
			int mode = 0;
			for (auto i : colors) mode = std::max(mode, i.second), result += i.second;
			result -= mode;
		}
	}
 
	std::cout << result << '\n';
 
	return 0;
}
