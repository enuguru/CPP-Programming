
#include <iostream>
using namespace std;

class A
{
    public:
       A(int a):x(a) 
       { 
	       cout << "\n" << "one arg constructor" << endl; 
       }
   private:
       int x;
};

int main()
{
  int p = 2;
  A a = p; 
  return 0;
}
