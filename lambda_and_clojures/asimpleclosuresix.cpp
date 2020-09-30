
// this function shows how you can call a simple closure

#include <iostream>
using namespace std;

int main()
{
    int j = 7;
    [](int & v, int j) {
        v *= j;
    } (j,6);
    cout << "j: " << j << endl;
    return 0;
}

// Notice that the lambda’s parameters do not affect the namespace.
