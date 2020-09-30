

// nested_class_template2.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

template <typename T>
class X
{
   template <typename U> class Y
   {
      U* u;
   public:
      Y();
      U& Value();
      void print();
      ~Y();
   };

   Y<int> y;
public:
   X(T t) { y.Value() = t; }
   void print() { y.print(); }
};


template <typename T> 
template <typename U>
X<T>::Y<U>::Y()
{
   cout << "X<T>::Y<U>::Y()" << endl;
   u = new U();
}

template <typename T> 
template <typename U>
U& X<T>::Y<U>::Value()
{
   return *u;
}

template <typename T> 
template <typename U>
void X<T>::Y<U>::print()
{
   cout << this->Value() << endl;
}

template <typename T> 
template <typename U>
X<T>::Y<U>::~Y()
{
   cout << "X<T>::Y<U>::~Y()" << endl;
   delete u;
}


int main()
{
   X<int>* xi = new X<int>(10);
   X<char>* xc = new X<char>('c');
   xi->print();
   xc->print();
   delete xi;
   delete xc;
}
