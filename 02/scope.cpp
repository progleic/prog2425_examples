//
// Created by JBispo on 16/02/2025.
//
#include <iostream>

int main() {
    int n;
    std::cout << "Value of n? "; std::cin >> n;
    int f = 1;
    for (int i = 1; i <= n; i++) {f = f * i;}
    
    // ERROR: 'i' is declared inside the 'for' header,
    // it disappears after the loop
    //std::cout << i;

    std::cout << "n! = " << f << '\n';
    return 0;
}