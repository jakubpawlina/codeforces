#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int tests_number;
	std::cin >> tests_number;

	while (tests_number--)
	{
		int days_number;
		std::cin >> days_number;
		std::string tasks;
		std::cin >> tasks;
		bool sus = false;
		for (size_t i = 0; i < tasks.size(); ++i)
		{
			bool distracted = false;
			for (size_t j = i + 1; j < tasks.size(); ++j)
			{
				if (tasks[j] != tasks[i]) distracted = true;
				if (distracted && tasks[j] == tasks[i])
				{
					sus = true;
					break;
				}
			}
		}
		if (sus) std::cout << "NO\n";
		else std::cout << "YES\n";
	}


	return 0;
}
