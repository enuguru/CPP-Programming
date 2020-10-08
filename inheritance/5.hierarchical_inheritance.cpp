
#include <iostream>
using namespace std;

class A
{
public:
    int x, y;
    void A_input()
    {
        cout<<"Enter two values of class A: ";
        cin>>x>>y;
    }
};
class B : public A // B is derived from A
{
public:
    void product()
    {
        cout<<"The Product of the two values is: "<< x * y<<endl;
    }
};
class C : public A //C is derived from A
{
public:
    void division()
    {
        cout<<"The Division of the two values is: "<< x / y<<endl;
    }
};
int main()
{

    cout<<"Welcome to C++ hierarchical inheritance !"<<endl<<endl;

    B b; // Object b of derived class B
    C c; // Object c of derived class C
    b.A_input();
    b.product();
    c.A_input();
    c.division();
    return 0;
}
