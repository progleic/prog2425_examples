#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>

int main()
{
  std::vector<int> v{1, 23, 5, 6, 32, 0, 45, 3};
  std::cout << std::count_if(v.begin(), v.end(),
                             [](int x)
                             { return x >= 20 && x <= 40; })
            << '\n';
  int a, b;
  std::cin >> a >> b;
  std::cout << count_if(v.begin(), v.end(),
                        [=](int x)
                        { return x >= a && x <= b; })
            << '\n';
  return 0;
}
