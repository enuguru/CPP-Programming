
#include <iostream>
#include <typeinfo>
#include "myfirst.hpp"
using namespace std;

// implementation/definition of template
template <typename T>
void print_typeof (T const& x)
{
    std::cout << typeid(x).name() << std::endl;
}

int main()
{
    double ice = 3.0;
    print_typeof(ice);  // call function template for type double
}
