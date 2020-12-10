#pragma GCC optimize("O3")
#include <bits/stdc++.h>

std::vector <int> sieve(int64_t n)
{
	std::vector <int> is_prime(n + 1, true);
	is_prime[0] = is_prime[1] = false;
	is_prime[2] = true;
	for (int64_t i = 2; i * i <= n; ++i)
	{
		if (is_prime[i])
		{
			for (int64_t j = i * i; j <= n; j += i)
			{
				is_prime[j] = false;
			}
		}
	}
	return is_prime;
}

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int64_t array_size;
	std::cin >> array_size;

	std::vector <int> is_prime = sieve(1000000 + 6);

	for (int64_t i = 0; i < array_size; ++i)
	{
		int64_t number;
		std::cin >> number;
		int64_t root = sqrt(number);
		if (root * root == number)
		{
			if (is_prime[root])
			{
				std::cout << "YES\n";
				continue;
			}
		}
		std::cout << "NO\n";
	}

	return 0;
}
