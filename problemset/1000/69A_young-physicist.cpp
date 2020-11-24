#pragma GCC optimize("O3")
#include <bits/stdc++.h>

struct vector
{
  int x;
  int y;
  int z;

  void read()
  {
    std::cin >> x >> y >> z;
  }

  void add(vector second)
  {
    x += second.x;
    y += second.y;
    z += second.z;
  }

  bool equilibrium()
  {
    if (x == 0 && y == 0 && z == 0) return true;
    return false;
  }

};

int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int vectors_number;
  std::cin >> vectors_number;

  vector result_vector{0, 0, 0};

  while (vectors_number--)
  {
    vector current_vector;
    current_vector.read();
    result_vector.add(current_vector);
  }

  if (result_vector.equilibrium()) std::cout << "YES\n";
  else std::cout << "NO\n";  

  return 0;
}
