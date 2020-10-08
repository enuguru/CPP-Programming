
#include <iostream>
using namespace std;

class B { };

class A {   
public:
       A operator =(B n) 
       { 
	       cout << endl << "assignment operator called" << endl;
	       return *this; 
       }
};

int main()
{
  A a;
  B p;
  a = p;
  return 0;
}
