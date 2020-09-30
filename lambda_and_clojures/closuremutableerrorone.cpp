
#include <iostream>
using namespace std;

int main()
{

    int i = 8;
    auto f =
        [=]()
    {
        int j = 2;
        auto m = [&] { i /= j; };
        m();
        cout << "inner: " << i;
    };
    f();
    cout << " outer: " << i;
    return 0;
}
