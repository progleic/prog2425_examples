#include "fraction.hpp"
#include <iostream>

namespace leic
{

  // Constructors
  fraction::fraction(int n, int d) : num(n), den(d)
  {
    reduce();
  }

  fraction::fraction() : fraction(0)
  {
  }

  fraction::fraction(const fraction &f) : fraction(f.num, f.den)
  {
  }

  // Destructor (empty, can be omitted)
  fraction::~fraction() {}

  // Member functions
  int fraction::numerator() const
  {
    return num;
  }

  int fraction::denominator() const
  {
    return den;
  }

  void fraction::add(const fraction &f)
  {
    num = num * f.den + f.num * den;
    den = den * f.den;
    reduce();
  }

  void fraction::mul(const fraction &f)
  {
    num = num * f.num;
    den = den * f.den;
    reduce();
  }

  void fraction::reduce()
  {
    int g = gcd(num, den);
    num /= g;
    den /= g;
    if (den < 0)
    {
      num = -num;
      den = -den;
    }
  }

  int fraction::gcd(int a, int b)
  {
    while (b != 0)
    {
      int tmp = a;
      a = b;
      b = tmp % b;
    }
    return a;
  }

  // Initialisation of ZERO class constant
  // (must be outside class)
  const fraction fraction::ZERO(0);

  // Operator <<
  std::ostream &operator<<(std::ostream &out, const fraction &f)
  {
    // direct access to field possible due to friend declaration
    out << f.num;
    if (f.den != 1)
      out << '/' << f.den;
    return out;
  }
}
