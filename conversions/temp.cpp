
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
    //A() { }

    //A(A &z) 
    //{
//	cout << endl << "this is a one arg constructor called for initialization" << endl;
 //   }

    A(B &y) 
    {
	cout << endl << "this is a one arg constructor called for conversion" << endl;
    }
};


int main()
{
    B p;
    //A q;
    //A s(q);
    A a = p;
    return 0;
}
