
#include <iostream>
using namespace std;

class A
{
   public:
     int p;
     A(int q):p(q) { }
     void print()
     {
         cout << endl << p << endl;
     }
};


class B:public A
{
   public:
     int x;
     B(int r):x(r),A(r) {   }   // you can initialize if it is your class variable, you cannot 
     void addandshow()          // you cannot directly initialize if it is base class variable
     {
          x = x + 20;
         cout << endl << x << endl;
     }
};

int main()
{
    int s = 20;
    B obj(s);
    obj.addandshow();
    obj.print();
}
