

#include <iostream>
using namespace std;

template< int n >
struct factorial 
{ 
    enum { ret = factorial< n - 1 >::ret * n }; 

};

template<>
struct factorial< 0 > 
{ 
    enum { ret = 1 }; 

};


int main() 
{
    cout << "10! = " << factorial<10>::ret << endl; // 5040
    return 0;
}
