
// this program show how to use a lambda expression which essentially replates a functor

#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

/*
template <typename T>
struct product
{
    product( T & storage ) : value(storage),count(storage-1) { cout << endl << "constructor called " << count; }
        
    template<typename V>
    void operator()( V & v )
    {
        value *= v;
        count = count + 1;
        cout << endl << count << "time" ;
    }
    T & value;
    int count;
};
*/

int main()
{

    int total_elements = 1;
    std::vector<int> myvector = {2,4,6};
    // in the statement below the "int i" variable means the vector elements one by one"
    // please note the above fact, it is very interesting
    for_each( myvector.cbegin(), myvector.cend(),
              [&total_elements](int i){total_elements = total_elements = total_elements * i;} );
    cout << total_elements;

    return 0;
}
