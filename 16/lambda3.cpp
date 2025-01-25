
#include <iostream>

int main()
{
  {
    int i = 123;
    auto f = [=](int x)
    { return x + i; };
    std::cout << f(1) << '\n'; // -> 124
    i = 321;
    std::cout << f(1) << '\n';
    ; // -> 124 again
  }
  {
    int i = 123;
    auto f = [&](int x)
    { return x + i; };
    std::cout << f(1) << '\n'; // -> 124
    i = 321;
    std::cout << f(1) << '\n';
    ; // -> 322
  }
  return 0;
}