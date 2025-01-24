
// Several different versions of a function
//   int max(int a, int b)
// that computes the maximum value of a and b.

namespace v1
{
  int max(int a, int b)
  {
    if (a > b)
      return a;
    return b;
  }
}

namespace v2
{
  int max(int a, int b)
  {
    if (a > b)
      return a;
    else // else is redundant
      return b;
  }
}

namespace v3
{
  int max(int a, int b)
  {
    int r = b;
    if (a > b)
      r = a;
    return r;
  }
}

namespace v4
{
  int max(int a, int b)
  {
    int r;
    if (a > b)
      r = a;
    else
      r = b;
    return r;
  }
}

namespace v5
{
  int max(int a, int b)
  {
    int r = a > b ? a : b;
    return r;
  }
}

namespace v6
{
  int max(int a, int b)
  {
    return a > b ? a : b;
  }
}

#include <iostream>
using namespace v6;

int main()
{
  int a, b;
  std::cout << "a and b?";
  std::cin >> a >> b;
  std::cout << "max: " << max(a, b) << "\n";
  return 0;
}
