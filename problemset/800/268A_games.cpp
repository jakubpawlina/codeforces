#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::array <int, 128> home_uniform;
	std::array <int, 128> guest_uniform;

	home_uniform.fill(0);
	guest_uniform.fill(0);

	int teams_number;
	std::cin >> teams_number;

	for (int i = 0; i < teams_number; ++i)
	{
		int home_color, guest_color;
		std::cin >> home_color >> guest_color;
		++home_uniform[home_color];
		++guest_uniform[guest_color];
	}

	int result = 0;

	for (int i = 1; i < 101; ++i)
	{
		result += home_uniform[i] * guest_uniform[i];
	}

	std::cout << result << '\n';

	return 0;
}
