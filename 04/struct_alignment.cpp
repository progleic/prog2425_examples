
#include <iostream>

struct a {
  int i;    // 4
  short s1; // 2
  short s2; // 2
};
struct b {
  short s1; // 2 
            // 2 (padding)
  int i;    // 4 
  short s2; // 2
            // 2 (padding)
};

int main(void) {
  std::cout << sizeof(a) << ' ' << sizeof(b) << '\n';
  return 0;
}
