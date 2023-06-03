
#include <iostream>
using namespace std;

class A
{
    public:
       A(int a):x(a) 
       { 
	       cout << "\n" << "one arg constructor" << endl; 
	       cout << a << endl;
       }
   private:
       int x;
       int b;
};

int main()
{
  int p = 2;
  A q(p);
  A a = p;
  return 0;
}
