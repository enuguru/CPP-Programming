
#include <iostream>
using namespace std;

class newclass
{
    int i;
    public:
    newclass()
    {
        i=0;
        cout << "calling the constructor of newclass" << endl;
    }
    ~newclass()
    {
        cout << "calling the destructor of newclass" << endl;
    }
};

void f()
{
    static newclass obj;
}

int main()
{
    int x=0;
    if(x==0)
    {
        f();
    }
    cout << "newclass constructor calling completed" << endl;
    cout << "newclass static object destructor never called" << endl;

    return 0;
}
