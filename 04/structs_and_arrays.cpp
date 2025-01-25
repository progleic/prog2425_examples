
#include <iostream>

int main() {
  
  struct data {
    double f;
    int a[2];
  };
  
  data d[3] { 
    { 1.5, {1, 2} }, 
    { 2.5, {3, 4} },
    { 3.5, {5, 6} }
  };
  
  std::cout << "sizeof(d) = " << sizeof(d) << '\n';
  return 0;
}
