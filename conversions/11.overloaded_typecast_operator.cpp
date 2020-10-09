
// implicit conversion of classes:
#include <iostream>
using namespace std;

class A {};

class B {
public:
  // conversion from A (constructor):
  B (A& x) { cout << endl << "calling one argument constructor" << endl;}
  // conversion from A (assignment):
  B& operator= (A& x) { cout << endl << "calling assignment operator" << endl; return *this;}
  // conversion to A (type-cast operator)
  operator A() { A obj; cout << endl << "calling overloaded typecast operator" << endl; return obj;}
};

int main ()
{
  A foo;
  B bar = foo;    // calls constructor
  bar = foo;      // calls assignment
  foo = bar;      // calls type-cast operator
  return 0;
}
