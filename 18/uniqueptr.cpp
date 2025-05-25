#include <memory>
#include <iostream>

class MyClass {
    int n_;

public:
    MyClass(int n) : n_(n) {}

    int getN() {return n_;}
};

int main() {

    auto p1 = std::make_unique<MyClass>(42); // Create unique pointer to class
    //auto p2 = p1; // Error: copy not allowed
    auto p3 = std::move(p1); // Moving ownership to p3
    //std::cout << p1->getN() << "\n"; // Runtime error: p1 is no longer valid
    std::cout << p3->getN() << "\n"; // p3 is now the owner

}