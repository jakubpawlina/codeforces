#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::string layout = "qwertyuiopasdfghjkl;zxcvbnm,./";

	char c_shift;
	std::cin >> c_shift;

	int shift = (c_shift == 'R') ? -1 : 1;

	std::string message;
	std::cin >> message;

	for (size_t i = 0; i < message.size(); ++i)
	{
		size_t pos = layout.find(message[i]);
		std::cout << layout[pos + shift];
	}
	std::cout << '\n';

	return 0;
}
