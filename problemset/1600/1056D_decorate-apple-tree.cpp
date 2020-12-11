#pragma GCC optimize("O3")
#include <bits/stdc++.h>

#define pvar(x) std::cout << x << '\n';
#define pvars(x) std::cout << x << ' ';
#define read(x) std::cin >> x;
#define outprec(x) std::cout.precision(x);

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

template <typename T> T gcd(T a, T b) {return(b ? std::__gcd(a, b) : a);}
template <typename T> T lcm(T a, T b) {return(a * (b / gcd(a, b)));}

bool powerof2(int64_t n) {return (n && !(n & (n - 1)));}
bool between(int64_t number, int64_t begin, int64_t end) {return (number >= begin) && (number <= end);}
bool perfect_square(int64_t n) {return (floor(sqrt(n)) == ceil(sqrt(n)));}
int64_t square(int64_t n) {return n * n;}
int64_t mod(int64_t n, int64_t mod = 1000000007){return (n > mod) ? (n % mod) : n;}

std::vector <int> tree[100005];
bool visited[100005];
int result[100005];

void dfs(int vertex)
{
	visited[vertex] = 1;
	if ((vertex != 1 && tree[vertex].size() == 1) || (vertex == 1 && tree[vertex].size() == 0))
	{
		result[vertex] = 1;
	}
	for (auto u : tree[vertex])
	{
		if (!visited[u])
		{
			dfs(u);
			result[vertex] += result[u];
		}
	}
	return;
}

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int junctions_number;
	read(junctions_number);
	for (int i = 2; i <= junctions_number; ++i)
	{
		int parent;
		read(parent);
		tree[i].push_back(parent);
		tree[parent].push_back(i);
	}

	dfs(1);

	std::sort(result + 1, result + junctions_number + 1);
	for (int i = 1; i <= junctions_number; ++i)
	{
		pvars(result[i]);
	}

	return 0;
}
