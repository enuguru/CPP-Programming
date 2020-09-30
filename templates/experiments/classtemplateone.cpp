
#include <iostream>
using namespace std;

template <typename T>
class Stack
{
  private:
     T data;
  public:
     Stack(T const& a)
     {
             data = a;
     }
     void print()
     {
         cout << endl << "the class data is " << data << endl;
     }
};

int main()
{
    Stack<int> obj(10);
    obj.print();
    return 0;
}
