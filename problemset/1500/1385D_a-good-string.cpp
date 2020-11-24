#pragma GCC optimize("O3")
#include <bits/stdc++.h>

// #define DEBUG
#define value(x) std::cerr << "Value of \"" << #x << "\" is " << x << '\n';
#define unto(i, begin, end) for (int i = begin; i < end; ++i)
#define print_array(array, begin, end) unto(i, begin, end) std::cout << array[i] << " \n"[i == end - 1];

int cgood(std::string input, char letter = 'a')
{
	if (input.length() == 1) return (input[0] != letter);
	int middle = input.length() / 2;
	int left = middle + cgood(std::string(input.begin(), input.begin() + middle), letter + 1) - std::count(input.begin() + middle, input.end(), letter);
	int right = middle + cgood(std::string(input.begin() + middle, input.end()), letter + 1) - std::count(input.begin(), input.begin() + middle, letter);
	return std::min(left, right);
}

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
		int length;
		std::cin >> length;
		std::string line;
		std::cin >> line;
		std::cout << cgood(line) << '\n';
	}
  return 0;
}
