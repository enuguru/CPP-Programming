
#include <iostream>
using namespace std;

template <typename T, typename U>
class A
{
   public:
     T p;
     U n;
};


template < typename G, typename H, template <typename,typename> class product >
class B
{
   public:
     product<G,H> x;
};


int main()
{
    B<int, float, A> obj;
}
