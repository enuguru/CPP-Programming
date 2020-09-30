

#include <iostream>
using namespace std;

int main()
{
    int i = 8;
    {
        int j = 2;
        auto f = [=] { cout << i/j; };
        f();
    }
    return 0;
}
