
#include <iostream>
using namespace std;

class SomeClass
{
public:
    int i;
//    float (* my_memfunc_ptr)(int, float);
//    float (* my_constmemfunc_ptr)(int, float);
    SomeClass() {
        i = 0;
    }
    void some_member_func() {
    }
    void some_constmember_func() const {
    }
};


int main()
{

    void (SomeClass::*my_memfunc_ptr)();
    // For const member functions, it's declared like this:
    void (SomeClass::*my_constmemfunc_ptr)() const;
    my_memfunc_ptr = &SomeClass::some_member_func;
    my_constmemfunc_ptr = &SomeClass::some_constmember_func;

    SomeClass *x = new SomeClass;
    (x->*my_memfunc_ptr)();
    // You can also use the .* operator if your class is on the stack.
    SomeClass y;
    (y.*my_constmemfunc_ptr)();

    return 0;
}
