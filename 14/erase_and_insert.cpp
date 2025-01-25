#include <iostream>
#include <vector>

using std::vector;

int main(int argc, char **argv)
{
    vector<int> c{10, 20, 30, 40, 50, 60};
    std::cout << "1\n";
    for (int v : c)
    {
        std::cout << v << '\n';
    }
    c.erase(c.begin() + 2);
    std::cout << "2\n";
    for (int v : c)
    {
        std::cout << v << '\n';
    }
    c.insert(c.end() - 2, 123);
    std::cout << "3\n";
    for (int v : c)
    {
        std::cout << v << '\n';
    }

    return 0;
}
