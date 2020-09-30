
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
     int x;
   B(int q = 10) { cout << endl << "I am getting called " << endl; print(); myprint(); }
   void myprint() {   }

};


int main()
{
    B obj;
}
