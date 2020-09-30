
#include <iostream>
using namespace std;

int main()
{
    int v = 42;
    auto func = [=]() {
        cout << v << endl;
    };
    v = 8;
    func();
    return 0;
}
