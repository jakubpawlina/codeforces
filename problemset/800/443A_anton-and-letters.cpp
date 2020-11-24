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

  std::string input;
	getline(std::cin, input);

	std::set <char> distinct;

	for (size_t i = 0; i < input.length(); ++i)
	{
		if (input[i] >= 'a' && input[i] <= 'z')
		{
			distinct.insert(input[i]);
		}
	}

	std::cout << distinct.size() << '\n';

  return 0;
}
