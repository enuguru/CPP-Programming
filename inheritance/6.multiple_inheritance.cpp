#include <iostream>
using namespace std;

class Base
{
public:
    int base_value;
    void Base_input()
    {
        cout<<"Enter the integer value of base class: ";
        cin>>base_value;
    }
};
class Derived1 : public Base // Derived class of base class
{
public:
    int derived1_value;
    void Derived1_input()
    {
        cout<<"Enter the integer value of first derived class: ";
        cin>>derived1_value;
    }
};
class Derived2 : public Derived1 // Derived class of Derived1 class
{
// private by deafult
    int derived2_value;
public:
    void Derived2_input()
    {
        cout<<"Enter the integer value of the second derived class: ";
        cin>>derived2_value;
    }
    void sum()
    {
        cout << "The sum of the three intger values is: " << base_value + derived1_value + derived2_value<<endl;
    }
};
int main()
{

    cout<<"Welcome to DataFlair tutorials!"<<endl<<endl;

    Derived2 d2; // Object d2 of second derived class
    d2.Base_input();
    d2.Derived1_input();
    d2.Derived2_input();
    d2.sum();
    return 0;
}
