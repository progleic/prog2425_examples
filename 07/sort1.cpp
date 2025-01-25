#include <iostream>
#include <algorithm>

int main()
{
  int a[7] = {1, 5, 6, 0, 3, 4, 2};
  std::sort(a, a + 7);
  for (int v : a)
  {
    std::cout << v << ' ';
  }
  std::cout << '\n';
  return 0;
}
