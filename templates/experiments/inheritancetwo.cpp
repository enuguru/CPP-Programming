
#include <iostream>
using namespace std;

class A
{
   public:
     int p;
     void print() {  }
};

class B:public A
{
   public:
     A x;
   B(int q = 10) {x.p = 90;  }
   void myprint() {   }

};


int main()
{
    B obj;
}
