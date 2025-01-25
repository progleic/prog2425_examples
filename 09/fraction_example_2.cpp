#include "fraction.hpp"

int main_2(void)
{
    leic::fraction a(1, 2), b(2, 3), c(1);
    a.mul(b); // 1/2 * 2/3 = 1/3
    a.add(c); // 1/3 + 1 = 4/3
    std::cout << a.numerator() << ' '
              << a.denominator() << '\n';           // -> 4 3
    std::cout << a << ' ' << b << ' ' << c << '\n'; // -> 4/3 2/3 1

    return 0;
}
