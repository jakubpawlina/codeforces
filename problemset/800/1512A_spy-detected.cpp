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
		int array_length;
		std::cin >> array_length;
		std::vector <int> array(array_length);
		for (auto &i : array) std::cin >> i;
		int correct = (array[1] != array[0] && array[2] != array[0]) ? array[1] : array[0];
		for (auto i = 0; i < (unsigned)array_length; ++i) if (array[i] != correct)
		{
			std::cout << i + 1 << '\n';
			break;
		}
	}

	return 0;
}