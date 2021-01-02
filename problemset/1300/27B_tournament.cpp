#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int participants_number;
	std::cin >> participants_number;

	std::vector <int> matches(participants_number + 2, 0);
	std::vector <int> wins(participants_number + 2, 0);
	std::vector <int> loses(participants_number + 2, 0);

	int games_number = participants_number * (participants_number - 1) / 2;

	for (int i = 0; i < games_number - 1; ++i)
	{
		int participant1, participant2;
		std::cin >> participant1 >> participant2;
		++matches[participant1];
		++matches[participant2];
		++wins[participant1];
		++loses[participant2];
	}

	std::vector <int> possible;
	for (int i = 1; i <= participants_number; ++i)
	{
		if (matches[i] < participants_number - 1)
		{
			possible.push_back(i);
			if (possible.size() == 2)
			{
				if (wins[possible[0]] < wins[possible[1]]) std::swap(possible[0], possible[1]);
				std::cout << possible[0] << ' ' << possible[1] << '\n';
				return 0;
			}
		}
	}

	return 0;
}
