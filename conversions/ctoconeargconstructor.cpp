
#include <iostream>
using namespace std;

class B
{
public:
    int x;
};


class A
{
public:
    A(B &z) { }
};


int main()
{
    B p;
    A a = p;
    return 0;
}
