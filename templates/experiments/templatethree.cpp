
#include <iostream>
using namespace std;

template <typename T,typename S>
class A
{
   public:
     T p;
     S u;
     void print() {  }
};

template <typename T>
class B
{
   public:
     T x;
     int p;
   B(int q = 10):p(q)  { x.print(); myprint();  }  // you can still call print class
   void myprint() { cout << endl << " the value of p is " << p << endl;  }
};


int main()
{
    float g = 56.6789;
    B<class A<int,float>> obj;
}
