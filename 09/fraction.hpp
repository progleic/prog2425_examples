#ifndef __fraction_hpp__
#define __fraction_hpp__
#include <iostream>

namespace leic
{
  class fraction
  {
  private:
    int num, den;

  public:
    // Constructors
    fraction(int n, int d = 1);

    fraction();

    fraction(const fraction &f);

    // Destructor (empty, can be omitted)
    ~fraction();

    // Member functions
    int numerator() const;

    int denominator() const;

    void add(const fraction &f);

    void mul(const fraction &f);

    void reduce();

    // Static definitions
  public:
    const static fraction ZERO;
    static int gcd(int a, int b);

    // Friend declarations
    friend std::ostream &operator<<(std::ostream &out, const fraction &f);
    friend class polynomial;
  };

}
#endif
