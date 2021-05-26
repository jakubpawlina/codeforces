#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	unsigned length, sum_of_digits;
	std::cin >> length >> sum_of_digits;

	if ((!sum_of_digits && length > 1) || sum_of_digits > 9 * length) std::cout << "-1 -1\n";
	else
	{
		std::vector <int> max(length, 0), min(length, 0);
		int sum = sum_of_digits;
		for (size_t i = 0; i < length; ++i)
		{
			if (sum >= 9) max[i] = 9, sum -= 9;
			else
			{
				max[i] = sum;
				break;
			}
		}
		sum = sum_of_digits;
		size_t pos = length - 1;
		while (sum > 9)
		{
			min[pos--] = 9;
			sum -= 9;
		}
		if (pos == 0) min[pos] = sum;
		else
		{
			min[pos] = sum - 1;
			min[0] = 1;
		}
		for (auto d : min) std::cout << d;
		std::cout << '\n';
		for (auto d : max) std::cout << d;
		std::cout << '\n';
	}


	return 0;
}
