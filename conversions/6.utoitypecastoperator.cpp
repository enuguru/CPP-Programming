
#include <iostream>
using namespace std;

class A
{
public:
    operator int() { cout << endl << "overloaded typecast called " << endl; return p;}
int p,q;
};


int main()
{
  A a;
//a.p=10;
//a.q=12;
 // cout << sizeof(a) << endl;
  int p = a;
  cout << sizeof(p) << sizeof(a) << endl;
  return 0;
}
