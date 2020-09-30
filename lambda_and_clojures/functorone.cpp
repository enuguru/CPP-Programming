
// this program demonstrates the use of functor
// also please note the usage of the state variable inside the functor that is count and value
// please note the first time when the object is created the object constructor is called
// and then the functor is called

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
struct product
{
    product( T & storage ) : value(storage),count(storage-1) { cout << endl << "constructor called count value is  " << count << "  the value variable is  " << value; }
        
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


int main()
{

    int total_elements = 1;
    std::vector<int> myvector = {2,4,6};
    for_each( myvector.cbegin(), myvector.cend(),
              product<int>(total_elements) ); // i think during the first time a temporary object is created
                                              // and then the functor is called
    cout << endl;
    cout << total_elements;
    cout << endl;
    return 0;
}
