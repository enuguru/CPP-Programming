

#include <iostream>
using namespace std;

int main()
{
    typedef int(*f_type)(int);
    f_type f = [](int i) {
        return i+20;
    };
    cout << endl << "call the closure  " << endl << "closure returns  " << f(8) << endl ;

}
