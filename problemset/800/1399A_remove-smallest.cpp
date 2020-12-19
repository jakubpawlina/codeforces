#pragma GCC optimize("O3")
#include <bits/stdc++.h>

#define pvar(x) std::cout << x << '\n'
#define pvars(x) std::cout << x << ' '
#define read(x) std::cin >> x
#define outprec(x) std::cout.precision(x)

#define unto(i, begin, end) for (int i = begin; i < end; ++i)
#define fea(last) unto(i, 0, last)

#define min3(a, b, c) std::min(std::min(a, b), c)
#define max3(a, b, c) std::max(std::max(a, b), c)

#define popcount(x) __builtin_popcount(x)
#define popcount_ll(x) __builtin_popcountll(x)
#define leading_zeros(x) __builtin_clz(x)
#define trailing_zeros(x) __builtin_ctz(x)
#define x2(n) (n << 1)
#define d2(n) (n >> 1)

#define all(x) x.begin(), x.end()
#define sortall(x) std::sort(all(x))
#define desc std::greater <int>()

template <typename T> T gcd(T a, T b) {return(b ? std::__gcd(a, b) : a);}
template <typename T> T lcm(T a, T b) {return(a * (b / gcd(a, b)));}

bool powerof2(int64_t n) {return (n && !(n & (n - 1)));}
bool between(int64_t number, int64_t begin, int64_t end) {return (number >= begin) && (number <= end);}
bool perfect_square(int64_t n) {return (floor(sqrt(n)) == ceil(sqrt(n)));}
int64_t square(int64_t n) {return n * n;}
int64_t mod(int64_t n, int64_t mod = 1000000007){return (n > mod) ? (n % mod) : n;}

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int tests_number;
	read(tests_number);

	while (tests_number--)
	{
		int elements_number;
		read(elements_number);
		std::vector <int> elements(elements_number);
		for (auto &element : elements) read(element);
		sortall(elements);
		bool ok = 1;
		for (size_t i = 1; i < elements.size(); ++i)
		{
			if (elements[i] - elements[i - 1] > 1)
			{
				pvar("NO");
				ok = false;
				break;
			}
		}
		if (ok) pvar("YES");
	}

	return 0;
}
