#include <vector>
#include <algorithm>
#include <iostream>

using std::vector;

int main()
{
  vector<int> v;
  while (true)
  {
    int x;
    std::cin >> x;
    if (x == 0)
    {
      break;
    }
    v.push_back(x);
  }
  sort(v.begin(), v.end());
  for (int x : v)
  {
    std::cout << x << ' ';
  }
  std::cout << '\n';
  return 0;
}
