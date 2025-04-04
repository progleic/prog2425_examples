#include <iostream>

int main()
{
  char s[6] = "C/C++";
  std::cout << s << '\n';
  char *p = &s[1];
  *p = '&';    // <=> s[1] = '&';
  p[1] = 'c';  // <=> a[2] = 'c';
  p[-1] = 'c'; // <=> a[0] = 'c';
  // s now contains "c&c++"
  std::cout << s << '|' << p << ' ' << *p << ' '
            << *s << ' '
            << sizeof(p) << ' ' << sizeof(s) << ' '
            << (p - s) << '\n';
  return 0;
}
