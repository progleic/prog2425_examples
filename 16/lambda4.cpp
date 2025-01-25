#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>

int main()
{
  std::vector<int> v{10, 20, 30};
  int i = 0;
  std::for_each(v.begin(), v.end(),
                [&i](int x)
                {
                  std::cout << i << ": " << x << '\n';
                  i++; // Increment i
                });
  std::cout << "i=" << i << '\n'; // 3 at the end
  return 0;
}
