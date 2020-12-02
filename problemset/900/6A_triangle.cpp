#pragma GCC optimize("O3")
#include <bits/stdc++.h>

bool v1(int a, int b, int c)
{
	return ((a + b) > c) && ((a + c) > b) && ((b + c) > a);
}

bool v2(int a, int b, int c)
{
	return ((a + b) == c) || ((a + c) == b) || ((b + c) == a);
}

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int a, b, c, d;
	std::cin >> a >> b >> c >> d;

	bool triangle = false;
	bool segment = false;

	triangle = triangle || v1(a, b, c);
	triangle = triangle || v1(b, c, d);
	triangle = triangle || v1(a, b, d);
	triangle = triangle || v1(a, c, d);

	segment = segment || v2(a, b, c);
	segment = segment || v2(b, c, d);
	segment = segment || v2(a, b, d);
	segment = segment || v2(a, c, d);

	if (triangle) std::cout << "TRIANGLE\n";
	else if (segment) std::cout << "SEGMENT\n";
	else std::cout << "IMPOSSIBLE\n";

	return 0;
}
