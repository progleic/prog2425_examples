
#include <iostream>

void print(const int a[], int n)
{
  std::cout << '[' << a[0];
  for (int i = 1; i < n; i++)
  {
    std::cout << ',' << a[i];
  }
  std::cout << "]\n";
}

int main()
{
  int a[4]{1, 2, 3, 4};
  print(a, 4);

  for (int &v : a)
  {
    v *= v;
  }
  print(a, 4);

  int n = 0;
  for (int v : a) {
    n += v;
  }
  std::cout << n << '\n';

  return 0;
}
