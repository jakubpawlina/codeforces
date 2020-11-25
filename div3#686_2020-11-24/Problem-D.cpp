#pragma GCC optimize("O3")
#include <bits/stdc++.h>

std::vector <bool> prime(100006, true);
std::vector <int> primes;

int64_t fast_power(int64_t base, int64_t exponent, int64_t modulo = LLONG_MAX)
{
	int64_t result = 1;

	base %= modulo;

	while (exponent > 0)
	{
		if (exponent & 1)
		{
			result = (result * base) % modulo;
		}
		exponent >>= 1;
		base = (base * base) % modulo;
	}

	return result;
}

void sieve(int limit = 100005)
{
	limit = std::max(limit, 1);
	prime[0] = prime[1] = false;
	for (int64_t i = 2; i <= limit; ++i)
	{
		if (prime[i])
		{
			primes.push_back(i);
			for (int64_t j = i * i; j <= limit; j += i)
			{
				if (prime[j])
				{
					prime[j] = false;
				}
			}
		}
	}
}

std::vector <std::pair <int64_t, int>> factorize(int64_t number)
{
	std::vector <std::pair <int64_t, int>> factors;
	int64_t times = 0;
	for (int64_t factor = 2; factor < 100005; ++factor)
	{
		if (prime[factor])
		{
			if (factor * factor > number) break;
			if (number % factor == 0) factors.push_back({factor, 0});
			while (number % factor == 0)
			{
				number /= factor;
				++factors.back().second;
			}
		}
	}
	if (number > 1) factors.push_back({number, 1});
	return factors;
}

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	sieve();

	int tests_number;
	std::cin >> tests_number;

	while (tests_number--)
	{
		int64_t n;
		std::cin >> n;
		std::vector <std::pair <int64_t, int>> prime_factors = factorize(n);

		int64_t factor = -1, frequent = 0;

		for (auto i : prime_factors)
		{
			if (i.second > frequent)
			{
				frequent = i.second;
				factor = i.first;
			}
		}

		std::cout << frequent << '\n';

		for (int64_t i = 1; i < frequent; ++i)
		{
			std::cout << factor << ' ';
		}

		std::cout << n / fast_power(factor, frequent - 1) << '\n';
	}

	return 0;
}
