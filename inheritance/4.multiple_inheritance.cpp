
#include<iostream>
using namespace std;
class A
{
public:
    int A_value;
    void A_input()
    {
        cout<<"Enter the integer value of class A: ";
        cin>>A_value;
    }
};


class B
{
public:
    int B_value;
    void B_input()
    {
        cout<<"Enter the integer value of class B: ";
        cin>>B_value;
    }
};


class C : public A, public B //C is a derived class from classes A and B
{
public:
    void difference()
    {
        cout<<"The difference between the two values is: " << A_value - B_value<<endl;
    }

};


int main()
{

    cout<<"Welcome to C++ multiple inheritance !"<<endl<<endl;

    C c; // c is an Object of derived class C
    c.A_input();
    c.B_input();
    c.difference();
    return 0;
}
