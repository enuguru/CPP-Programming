
// implicit conversion of classes

#include <iostream>
using namespace std;

class A { };

class B
{
public:
    // conversion from A (constructor):
    B (const A& x) {cout << endl << "B's constructor called" << endl; }
    // conversion from A (assignment):
    B& operator= (const A& x) {
        cout << "B's assignment operator called" << endl;
        return *this;
    }
    // conversion to A (type-cast operator)
    operator A() {
        cout << "A's function call operator () called" << endl;
        return A();
    }
};


int main ()
{
    A foo;
    B bar = foo;    // calls constructor
    bar = foo;      // calls assignment
    foo = bar;      // calls type-cast operator
    return 0;
}
