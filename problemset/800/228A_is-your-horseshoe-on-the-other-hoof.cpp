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

  std::set <int> different;

	unto(i, 0, 4)
	{
		int tmp;
		std::cin >> tmp;
		different.insert(tmp);
	}

	std::cout << 4 - different.size() << '\n';

  return 0;
}
