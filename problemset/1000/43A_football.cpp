#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int teams_number;
	std::cin >> teams_number;

	std::map <std::string, int> results;

	while (teams_number--)
	{
		std::string goal;
		std::cin >> goal;
		++results[goal];
	}

	std::string winner = "";
	int winner_result = 0;

	for (auto i : results)
	{
		if (i.second > winner_result)
		{
			winner_result = i.second;
			winner = i.first;
		}
	}

	std::cout << winner << '\n';

	return 0;
}
