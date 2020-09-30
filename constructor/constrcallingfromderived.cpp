
/*

Base class constructors are automatically called for you if they have no argument. If you want to call a superclass constructor with an argument, you must use the subclass's constructor initialization list. Unlike Java, C++ supports multiple inheritance (for better or worse), so the base class must be referred to by name, rather than "super()".

*/

#include <iostream>
using namespace std;

class SuperClass
{
    public:

        SuperClass(int foo)
        {
            cout << endl << "super class called  "  << foo << endl; 
        }
};

class SubClass : public SuperClass
{
    public:

        SubClass(int bar)
        {
                  
            cout << endl << "sub class called  "  << endl; 
            // do something with bar
        }
};


int main()
{

    SubClass b(30);

}     
