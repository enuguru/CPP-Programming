
#include <iostream>
using namespace std;

template <typename T>
class Stack
{
  private:
     T data;
  public:
     Stack(T const &a);
     void print();
};


template <typename T>
Stack<T>::Stack(T const &a)
{
    data = a;
}


template <typename T>
void Stack<T>::print()
{
         cout << endl << "the class data is " << data << endl;
}


int main()
{
    Stack obj(10);
    obj.print();
    return 0;
}
