#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::string guest_name;
	std::cin >> guest_name;

	std::string host_name;
	std::cin >> host_name;

	std::string pile_letters;
	std::cin >> pile_letters;

	std::sort(pile_letters.begin(), pile_letters.end());

	std::string possible_pile;
	possible_pile = guest_name + host_name;

	std::sort(possible_pile.begin(), possible_pile.end());

	if (pile_letters == possible_pile) std::cout << "YES\n";
	else std::cout << "NO\n";

	return 0;
}
