

#include <iostream>
using namespace std;

class Base
{
public:
    int base_value;
    void base_input()
    {
        cout<<"Enter the integer value of base class: ";
        cin>>base_value;
    }

};


class Derived : public Base
{
// private by default
    int derived_value;
public:
    void derived_input()
    {
        cout<<"Enter the integer value of derived class: ";
        cin>>derived_value;
    }

    void sum()
    {
        cout << "The sum of the two integer values is: " << base_value + derived_value<<endl;
    }

};


int main()
{

    cout<<"Welcome to C++" << endl;

    Derived d; // Object of the derived class
    d.base_input();
    d.derived_input();
    d.sum();
    return 0;
}
