
#include <iostream>
using namespace std;

template <typename T>
int foo(T f)
{

}

int main()
{
    int x = 10;
    auto y = foo(x);
    return 0;

}
