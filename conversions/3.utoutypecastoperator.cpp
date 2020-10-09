
#include <iostream>
using namespace std;

class A { };

class B 
{
A obj;
public:
    operator A() { 
	    cout << endl << "typecast operator in source class is called " << endl;
	    return obj; 
    }
    int x;
};



int main()
{
    B p;
    A a(p);
//    A a = p;
    return 0;
}
