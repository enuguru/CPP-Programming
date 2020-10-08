
#include <iostream>
using namespace std;

class A
{
    public:
      A operator= (int a) { return *this; }
};


int main()
{
  int p = 2;
  A a;
  a = p; 
  cout << sizeof(a) << sizeof(p) << endl;
  return 0;
}
