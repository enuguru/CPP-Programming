
#include <iostream>
using namespace std;

class A
{
public:
    int A_value;
};
class B : public A
{
public:
    B() // Use of a constructor to initialize A_value
    {
        A_value = 20;
    }
};
class C
{
public:
    int C_value;
    C() //Use of a constructor to initialize C_value
    {
        C_value = 40;
    }
};
class D : public B, public C // D is derived from class B and class C
{
public:
    void product()
    {
        cout<<"The product of the two integer values is: " << A_value * C_value<<endl;
    }
};

int main()
{

    cout<<"Welcome to C++ hybrid inheritance !"<<endl<<endl;

    D d; // Object d of derived class D
    d.product();
    return 0;
}
