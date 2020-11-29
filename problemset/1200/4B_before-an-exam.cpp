#pragma GCC optimize("O3")
#include <bits/stdc++.h>

bool between(int number, int begin, int end)
{
	return (number >= begin) && (number <= end);
}

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int days, hours;
	std::cin >> days >> hours;

	std::vector <std::pair <int, int>> time;

	int total_min = 0, total_max = 0;

	for (int i = 0; i < days; ++i)
	{
		int min_hours, max_hours;
		std::cin >> min_hours >> max_hours;
		total_min += min_hours;
		total_max += max_hours;
		time.push_back({min_hours, max_hours});
	}

	if (!between(hours, total_min, total_max))
	{
		std::cout << "NO\n";
		return 0;
	}
	else
	{
		std::cout << "YES\n";
		std::vector <int> result;
		for (int i = 0; i < days; ++i)
		{
			result.push_back(time[i].first);
			hours -= time[i].first;
		}
		int index = 0;
		while (hours > 0 && index < days)
		{
			int possible_time = time[index].second - result[index];
			if (possible_time > hours) possible_time = hours, hours = 0;
			result[index] += possible_time;
			hours -= possible_time;
			++index;
		}
		for (int i = 0; i < days; ++i)
		{
			std::cout << result[i] << ' ';
		}
		std::cout << '\n';
	}


	return 0;
}
