

#include <iostream>
using namespace std;

int main()
{
    int i = 8;
    auto f =
        []()
    {
        int j = 2;
        auto m = [=] { cout << i/j; };
        m();
    };
    f();
    return 0;
}
