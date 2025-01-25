#include <iostream>

int main()
{
  int a = 1, b = 2, c = 3;
  int *iparr[3] = {&a, &b, &c};
  for (int i = 0; i < 3; i++)
  {
    std::cout << iparr[i] << ' ' << *iparr[i] << '\n';
    *iparr[i] = 0;
  }
  std::cout << a << ' ' << b << ' ' << c << '\n';

  const char *sparr[] = {"Hello", "_", "C++"};
  for (const char *s : sparr)
  {
    std::cout << s;
  }

  std::cout << '\n';
}
