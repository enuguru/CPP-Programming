
#include <iostream>
using namespace std;

class A { };

class B 
{
A obj;
public:
    operator A() { return obj; }
    int x;
};



int main()
{
    B p;
    A a(p);
//    A a = p;
    return 0;
}
