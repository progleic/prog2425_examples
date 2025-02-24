
#include <iostream>

struct point2d {
  double x;
  double y;
};

// s1: return new point
point2d sum(point2d a, point2d b) {
  point2d r;
  r.x = a.x + b.x;
  r.y = a.y + b.y;
  return r;
}

// s2: update references
void sum(const point2d& a, const point2d& b, point2d& r) {
  r.x = a.x + b.x;
  r.y = a.y + b.y;
}

// s3: overloading "+" (not in the slides):
point2d operator+(const point2d &a, const point2d &b) {
  return {a.x+b.x, a.y+b.y};
}

int main() {
  std::cout << "sizeof(point2d): " << sizeof(point2d) << '\n';
 
  point2d a { 1.2, 3.4 };
  std::cout << "a: " << a.x << ' ' << a.y << '\n';

  point2d& b = a;
  b.x = 2.2;
  std::cout << "b: " << b.x << ' ' << b.y << '\n';

  point2d s1 = sum(a,b);
  std::cout << "s1: " << s1.x << ' ' << s1.y << '\n';

  point2d s2; 
  sum(a, b, s2);
  std::cout << "s2: " << s2.x << ' ' << s2.y << '\n';

  point2d s3 = a + b; 
  std::cout << "s3: " << s3.x << ' ' << s3.y << '\n';
   
  return 0;
}

