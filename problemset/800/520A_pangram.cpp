#pragma GCC optimize("O3")
#include <bits/stdc++.h>

bool pangram(std::string text)
{
	if (text.length() < 26) return 0;
	std::array <int, 26> alphabet;
	alphabet.fill(0);
	std::for_each(text.begin(), text.end(), [](char & c) {c = ::tolower(c);});
	for (int i = 0; i < text.length(); ++i) ++alphabet[text[i] - 'a'];
	for (auto i : alphabet) if (!i) return 0;
	return 1;
}

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int input_length;
	std::cin >> input_length;

	std::string input;
	std::cin >> input;

	if (pangram(input)) std::cout << "YES\n";
	else std::cout << "NO\n";

	return 0;
}
