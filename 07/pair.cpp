
#include <utility>
#include <iostream>

int main()
{

  std::pair<int, float> x{1, 2.5};
  std::cout << x.first << ' ' << x.second << '\n';

  std::pair<double, int> y{2.5, 1};
  std::cout << y.first << ' ' << y.second << '\n';

  struct time_of_day
  {
    unsigned char h;
    unsigned char m;
  };
  std::pair<const char *, time_of_day> z{"Hello", {23, 59}};
  std::cout << z.first << ' '
            << (int)z.second.h << ':'
            << (int)z.second.m << '\n';

  auto x2 = std::make_pair(1, 2);
  std::cout << x2.first << ' ' << x2.second << '\n';

  auto y2 = std::make_pair("Hello", "World");
  std::cout << y2.first << ' ' << y2.second << '\n';

  typedef std::pair<const char *, const char *> spair;

  spair y3 = std::make_pair("Hello", "World");
  std::cout << y3.first << ' ' << y3.second << '\n';

  return 0;
}
