

#include <iostream>
using namespace std;

int main()
{

    int i = 10;
    auto two_i = [=]() mutable  // see lambda is an unnamed function but mutable says you can change i here
    { 
         i *= 2; return i; 
    };
    cout << "2i:" << two_i() << " i:" << i << endl;
    return 0;
}
