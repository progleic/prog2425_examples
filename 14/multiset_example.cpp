#include <set>
#include <iostream>

using std::multiset;

int main()
{
    multiset<int> ms;
    for (char i = 1; i <= 3; i++)
        for (int j = 1; j <= i; j++)
            ms.insert(i);
    for (auto v : ms)
        std::cout << v << " count: " << ms.count(v) << '\n';
    return 0;
}