

#include<iostream>

using namespace std;

class A
{
public:
    virtual void display(int data = 10) {
        cout<< "A : " << data << endl;
    }
};


class B : public A
{
public:
    void display(int data = 20) {
        cout<< "B : "<< data << endl;
    }
};

int main()
{
    A *a = new B;
    a->display();
}

/*
Expected Result:
B : 20
Actual Result:
B : 10
Explanation:
Default argument value resolved at compile time but virtual function invocation is resolved at run time so default argument is used as 10 but function is called of class B. 

*/
