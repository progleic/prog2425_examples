#include <iostream>

void get_min_max(int a, int b, int &min, int &max)
{
  min = a < b ? a : b;
  max = a > b ? a : b;
}
int main()
{
  int x = 200, y = 100;
  int m, M;
  get_min_max(x, y, m, M);
  std::cout << m << ' ' << M << '\n'; // --> 100, 200
  return 0;
}
