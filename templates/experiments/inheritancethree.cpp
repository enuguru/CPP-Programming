
// this program shows that having a template is 
// equalent to have aggregation of class A inside class B

#include <iostream>
using namespace std;

class A
{
   public:
     int p;
     A(int m = 39):p(m){ }
     void print() {  }
};


class B
{
   public:
     A x;
     B(int q = 10):x(q) {x.p = 90;  }
     void myprint() {   }

};


int main()
{
    B obj;
}
