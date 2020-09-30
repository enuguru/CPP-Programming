
#include <iostream>
using namespace std;

class A
{
   public:
     int p;
     void print() {  }
};

template <typename T>
class B:public A
{
   public:
     T x;
   B(int q = 10) {  }
   void myprint() {   }

};


int main()
{
    B<class A> obj;
}
