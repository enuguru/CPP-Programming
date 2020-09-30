
#include <iostream>
using namespace std;

template <typename T>
class Stack
{
  private:
     T data;
  public:
     Stack(T const &a = 10);
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
    Stack<int> obj;
    obj.print();
    return 0;
}
