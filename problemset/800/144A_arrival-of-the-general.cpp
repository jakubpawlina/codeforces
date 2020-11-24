#pragma GCC optimize("O3")
#include <bits/stdc++.h>

// #define DEBUG
#define value(x) std::cerr << "Value of \"" << #x << "\" is " << x << '\n';
#define unto(i, begin, end) for (int i = begin; i < end; ++i)
#define fea(last) unto(i, 0, last)
#define print_array(array, begin, end) unto(i, begin, end) std::cout << array[i] << " \n"[i == end - 1];

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  #ifdef DEBUG
    printf("DEBUG was defined at compile time\n");
  #endif // DEBUG

  int soldiers_number;
	std::cin >> soldiers_number;

	int mm = INT_MAX;
	int mp = -1;
	int mx = INT_MIN;
	int xp = -1;

	fea(soldiers_number)
	{
		int current_height;
		std::cin >> current_height;
		if (current_height <= mm)
		{
			mm = current_height;
			mp = i + 1;
		}
		if (current_height > mx)
		{
			mx = current_height;
			xp = i + 1;
		}
	}

	if (xp > mp) --xp;

	std::cout << xp + soldiers_number - mp - 1 << '\n';

  return 0;
}
