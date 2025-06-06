#include <set>
#include <iostream>

using std::set;

int main()
{
    set<int> s; // ou unordered_set
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.erase(2);
    for (int i = 0; i <= 3; i++)
        if (s.find(i) != s.end())
            std::cout << i << " is in the set" << '\n';
        else
            std::cout << i << " is not in the set" << '\n';
    return 0;
}