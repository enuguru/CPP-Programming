
#include <iostream>
using namespace std;

template <typename T>
class A
{
   public:
     T p;
};


template < typename T, template <typename> class product >
class B
{
   public:
     product<T> x;
};


int main()
{
    B<int, A> obj;
}
