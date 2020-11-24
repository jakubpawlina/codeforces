#pragma GCC optimize("O3")
#include <bits/stdc++.h>

// #define DEBUG
#define value(x) std::cerr << "Value of \"" << #x << "\" is " << x << '\n';
#define unto(i, begin, end) for (int i = begin; i < end; ++i)
#define print_array(array, begin, end) unto(i, begin, end) std::cout << array[i] << " \n"[i == end - 1];

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  #ifdef DEBUG
    printf("DEBUG was defined at compile time\n");
  #endif // DEBUG

  int tests_number;
	std::cin >> tests_number;

	while (tests_number--)
	{
		int n;
		std::cin >> n;
		std::vector <int> a;
		for (int i = 0; i < n; ++i)
		{
			int element;
			std::cin >> element;
			a.push_back(element);
		}
		int ind = n - 1;
		while (ind > 0 && a[ind] <= a[ind - 1])
		{
			--ind;
		}
		while (ind > 0 && a[ind] >= a[ind - 1])
		{
			--ind;
		}
		std::cout << ind << '\n';
	}

  return 0;
}
