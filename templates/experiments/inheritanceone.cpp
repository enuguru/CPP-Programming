
#include <iostream>
using namespace std;

class A
{
   public:
     int p;
     A(int m = 39):p(m){ }
     void print() {  }
};

class B:public A
{
   public:
     A x;
     B(int q = 10):x(q), A(q) {x.p = 90;  }
     void myprint() {   }

};


int main()
{
    B obj;
}
