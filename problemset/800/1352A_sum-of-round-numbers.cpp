#pragma GCC optimize("O3")
#include <bits/stdc++.h>

#define pvar(x) std::cout << x << '\n';
#define pvars(x) std::cout << x << ' ';
#define read(x) std::cin >> x;
#define outprec(x) std::cout.precision(x);

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int tests_number;
	std::cin >> tests_number;

	while (tests_number--)
	{
		std::queue <int> rounds;
		int n;
		std::cin >> n;
		short mn = 1;
		while (n)
		{
			if (n % 10)
			{
				rounds.push((n % 10) * mn);
			}
			n /= 10;
			mn *= 10;
		}
		pvar(rounds.size());
		while (rounds.size())
		{
			pvars(rounds.front());
			rounds.pop();
		}
		pvar("");
	}

	return 0;
}
