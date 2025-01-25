#include <iostream>

int main()
{
  int v = 123;
  int &r = v;
  int *p = &v;
  r = r + 1;
  *p = *p + 1;
  std::cout << p << ' ' << *p << ' ' << r << ' ' << v << '\n';
  return 0;
}
