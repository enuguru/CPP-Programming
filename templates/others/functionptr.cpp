

#include <iostream>
#include <typeinfo>

void foo()
{
    std::cout << "foo() called" << std::endl;
}
     
typedef void FooT();  // FooT is a function type,
                      // the same type as that of function foo()

int main()
{
    foo();           // direct call

    // print types of foo and FooT
    std::cout << "Types of foo:  " << typeid(foo).name()
              << '\n';
    std::cout << "Types of FooT: " << typeid(FooT).name()
              << '\n';

    FooT* pf = foo;  // implicit conversion (decay)
    pf();            // indirect call through pointer
    (*pf)();         // equivalent to pf()

    // print type of pf
    std::cout << "Types of pf:   " << typeid(pf).name()
              << '\n';

    FooT& rf = foo;  // no implicit conversion
    rf();            // indirect call through reference

    // print type of rf
    std::cout << "Types of rf:   " << typeid(rf).name()
              << '\n';
}
