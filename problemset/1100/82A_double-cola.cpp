#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::vector <std::string> names = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

	int n;
	std::cin >> n;

	int pow_round = 1;
	while (pow_round * 5 < n)
	{
		n -= pow_round * 5;
		pow_round *= 2;
	}
	
	std::cout << names[(unsigned)(((n - 1) / pow_round))] << '\n';

	return 0;
}
