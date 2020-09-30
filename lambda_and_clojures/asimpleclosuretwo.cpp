
// this function shows how you can call a simple closure

#include <iostream>
using namespace std;

int main()
{
    int i = 7;
    [](int & v) {
        v *= 6;
    } (i);
    cout << "the correct value is: " << i << endl;
    return 0;
}
