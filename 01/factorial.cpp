#include <iostream>

int factorial(int n) {
  int r = 1;
  for (int i = 1; i <= n; i++) r = r * i; 
  return r;
}
 
int main() {
  int n;
  std::cout << "n ? ";
  std::cin >> n;
  std::cout <<  n << "! = " << factorial(n) << "\n";
  return 0;
}
