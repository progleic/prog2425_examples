#include <iostream>
#include <iomanip>

void example_1()
{
  std::cout << "== example 1 ==\n";
  char s[6] = "C/C++";
  std::cout << s << '\n';
  char *p = &s[3];
  p++;                    // p now points to s[4]
  *p = '*';               // <=> s[4] = 'Z';
  p--;                    // p points to s[3] again
  *p = '*';               //
  std::cout << s << '\n'; // --> "C/C**"
}

void example_2()
{
  std::cout << "== example 2 ==\n";
  char s[6] = "C/C++";
  std::cout << s << '\n';
  char *p = s + 4;        // <=> p = &s[4];
  char *q = p - 4;        // <=> q = &s[0];
  *(p - 3) = '+';         // <=> s[1] = '+';
  *(q + 3) = '/';         // <=> s[3] = '/';
  std::cout << s << '\n'; // --> "C+C/+"
  int n = p - q;          // <=> n = &s[4] - &s[0];
  std::cout << n << '\n'; // --> 4
}

void example_3()
{
  std::cout << "== example 3 ==\n";
  char a[5];
  char *p = a + 1;
  char *q = a + 2;
  std::cout << std::boolalpha
            << "p == q ? " << (p == q) << " / p != q ? " << (p != q)
            << "\np < q ? " << (p < q) << " / q < p ? " << (q < p)
            << "\np > q ? " << (p > q) << " / q > p ? " << (q > p) << '\n';
}

int main()
{
  example_1();
  example_2();
  example_3();
}
