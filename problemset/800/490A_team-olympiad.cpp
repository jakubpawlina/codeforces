#pragma GCC optimize("O3")
#include <bits/stdc++.h>

#define min3(a, b, c) std::min(std::min(a, b), c)
#define max3(a, b, c) std::max(std::max(a, b), c)

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int students_number;
	std::cin >> students_number;

	int mathematicians_number = 0;
	int programmers_number = 0;
	int sportsmen_number = 0;

	std::vector <int> programmers;
	std::vector <int> mathematicians;
	std::vector <int> sportsmen;

	for (int i = 1; i <= students_number; ++i)
	{
		int student;
		std::cin >> student;
		if (student == 1)
		{
			++programmers_number;
			programmers.push_back(i);
		}
		else if (student == 2)
		{
			++mathematicians_number;
			mathematicians.push_back(i);
		}
		else
		{
			++sportsmen_number;
			sportsmen.push_back(i);
		}
	}

	int result = min3(programmers_number, mathematicians_number, sportsmen_number);

	std::cout << result << '\n';

	for (int i = 0; i < result; ++i)
	{
		std::cout << programmers[i] << ' ' << mathematicians[i] << ' ' << sportsmen[i] << '\n';
	}

	return 0;
}
