#include <bits/stdc++.h>
 
int distance(int current, int previous)
{
	int d1 = std::max(current, previous) - std::min(current, previous);
	int d2 = 'z' - std::max(current, previous) + std::min(current, previous) - 'a' + 1;
	return std::min(d1, d2);
}
 
int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
 
	std::string exhibit_name;
	std::cin >> exhibit_name;
 
	int position = 0;
 
	int result = 0;
 
	for (size_t i = 0; i < exhibit_name.size(); ++i)
	{
		int current_position = exhibit_name[i] - 'a';
		result += distance(current_position, position);
		position = current_position;
	}
 
	std::cout << result << '\n';
 
	return 0;
}