#include <iostream>
#include <limits>

int read_int()
{
  int x;
  while (true)
  {
    if (std::cin >> x)
    {
      break;
    }
    std::cin.clear();   // clear error flag
    std::cin.ignore(1); // skip 1 character and try again
  }
  return x;
}

int read_int_v2()
{
  int x;
  while (true)
  {
    if (std::cin >> x)
    {
      break;
    }
    std::cin.clear(); // clear error flag
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                    '\n'); // skip rest of the line
  }
  return x;
}

int main()
{
  std::cout << read_int() << '\n';
  std::cout << read_int_v2() << '\n';
  return 0;
}
