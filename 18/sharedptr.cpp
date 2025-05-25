//
// Created by JBispo on 25/05/2025.
//
#include <memory>
#include <iostream>

class MyClass {
    int n_;

public:
    MyClass(int n) : n_(n) {}

    int getN() {return n_;}
};

int main() {

    auto p1 = std::make_shared<MyClass>(42); // Create shared pointer to class
    auto p2 = p1; // Allowed, two references to the same object
    auto p3 = std::move(p1); // Can also move shared pointers
    //std::cout << p1->getN() << "\n"; // Runtime error: p1 is no longer valid
    std::cout << p2->getN() << "\n"; // p2 is an owner, can use resource
    std::cout << p3->getN() << "\n"; // p3 is an owner, can use resource

}