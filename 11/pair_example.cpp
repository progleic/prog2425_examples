
#include "pair.hpp"

#include <iostream>
#include <string>

int main()
{
  pair<int, std::string> a{2024, "leic"};
  std::cout << a.first() << ' ' << a.second() << '\n';

  pair<std::string, pair<int, int>> b{"leic", {2023, 2024}};
  std::cout << b.first() << ' '
            << b.second().first() << ' '
            << b.second().second() << ' ';
  return 0;
}
