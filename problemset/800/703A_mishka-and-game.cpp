#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int rounds_number;
	std::cin >> rounds_number;

	int mishka_result = 0;
	int chris_result = 0;

	for (int i = 0 ; i < rounds_number; ++i)
	{
		int mishka; std::cin >> mishka;
		int chris; std::cin >> chris;
		if (mishka > chris) ++mishka_result;
		else if (chris > mishka) ++chris_result;
	}

	if (mishka_result > chris_result) std::cout << "Mishka\n";
	else if (chris_result > mishka_result) std::cout << "Chris\n";
	else std::cout << "Friendship is magic!^^\n";

	return 0;
}
