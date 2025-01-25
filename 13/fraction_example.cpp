#include "fraction.hpp"

using leic::fraction;

int main(void)
{
    fraction a(1, 2), b(2, 3), c(1);
    a = a * b + c;
    std::cout << a.numerator() << ' '
              << a.denominator() << '\n';           // -> 4 3
    std::cout << a << ' ' << b << ' ' << c << '\n'; // -> 4/3 2/3 1

    return 0;
}
