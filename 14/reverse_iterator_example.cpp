#include <iostream>
#include <vector>

using std::vector;

int main(int argc, char **argv)
{
    vector<char> c{'R', 'O', 'M', 'A'};
    for (auto itr = c.rbegin();
         itr != c.rend();
         itr++)
    {
        std::cout << *itr;
    }
    std::cout << '\n';
    return 0;
}
