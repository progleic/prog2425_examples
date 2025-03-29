//
// Created by JBispo on 16/02/2025.
//

#include <iostream>

struct A {
    unsigned int x;
    unsigned int y;
};

struct B {
    int id;
    A a;
};

void foo(const B& b) {
    //b.id = 10; // ERROR: b is const ref
    //b.a.x = 10; // ERROR: const ref propagates
}

int main() {

    B b = {0, {1, 2}};

    std::cout << b.a.x ;

    return 0;
}