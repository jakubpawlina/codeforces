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
		int length;
		std::cin >> length;
		for (int i = 1; i < length; ++i)
		{
			std::cout << "1 ";
		}
		std::cout << "1\n";
	}
 
	return 0;
}
