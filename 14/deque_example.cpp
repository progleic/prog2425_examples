
#include <iostream>
#include <deque>

using std::deque;
using std::string;

int main(int argc, char **argv)
{
    deque<string> dq{"a", "b", "c", "d", "e"};
    dq.push_back("f");
    dq.push_front("g");
    std::cout << dq.size() << " [";
    for (size_t i = 0; i < dq.size(); i++)
    {
        std::cout << ' ' << dq.at(i);
    }
    std::cout << " ]\n";

    return 0;
}
