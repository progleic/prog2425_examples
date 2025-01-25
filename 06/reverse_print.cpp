#include <iostream>

int main()
{
  int n;
  std::cout << "n? ";
  std::cin >> n;
  // Allocate array
  double *arr = new double[n];
  // Read values
  for (int i = 0; i < n; i++)
  {
    std::cin >> arr[i];
  }
  // Print values in reverse order
  for (int i = n - 1; i >= 0; i--)
  {
    std::cout << arr[i] << '\n';
  }
  // Free up memory
  delete[] arr;
  return 0;
}
