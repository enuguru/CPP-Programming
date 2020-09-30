
#include <iostream>
using namespace std;

template <typename T>
class A
{
   public:
     T p;
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
    B<class A<int>> obj;
}
