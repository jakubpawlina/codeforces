#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int requests_number;
	std::cin >> requests_number;

	std::map <std::string, int> users;

	for (int i = 0; i < requests_number; ++i)
	{
		std::string username;
		std::cin >> username;
		++users[username];

		if (users[username] == 1)
		{
			std::cout << "OK\n";
		}
		else
		{
			std::cout << username << users[username] - 1 << '\n';
		}
	}


	return 0;
}
