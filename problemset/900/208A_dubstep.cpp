#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string mix;
  std::cin >> mix;

  size_t index = 0;
  while (true)
  {
    index = mix.find("WUB", index);
    if (index == std::string::npos) break;
    mix.replace(index, 3, " ");
    ++index;
  }

  std::string result = "";
  std::string current_block = "";

  for (auto character : mix)
  {
    if (isspace(character) && current_block != "")
    {
      result = result + current_block + " ";
      current_block = "";
    }
    else if (!isspace(character))
    {
      current_block += character;
    }
  }
  if (current_block != "")
  {
    result += current_block;
  }
  if (isspace(result[result.length() - 1]))
  {
    result.erase(result.length() - 1);
  }

  std::cout << result << '\n';

  return 0;
}
