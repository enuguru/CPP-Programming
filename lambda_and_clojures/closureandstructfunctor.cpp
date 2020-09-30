

// this is like a function pointer only but done through the functional in the std library

#include <iostream>
#include <functional>
using namespace std;

struct my_functor
{
    my_functor( std::string const & s) : s_(s) {}
    int operator()() const
    {
        cout << endl << "I am in the struct functor called through closure of std library" << endl;
        return s_.size();
    }
    std::string s_;
};

int main()
{
    my_functor mine("cierecloud.com/cppnow");
    std::function< int() > f; // this is the function pointer done through std function library
    f = std::ref(mine);       // you are passing the object reference to f 
    int size = f();           // f()  means you are not passing argument to functor, since functor 
                              // does not take any argument
    return 0;
}
