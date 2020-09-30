
// this function shows how you can call a simple closure

#include <iostream>
using namespace std;

int main()
{
    int j = 7;
    [](int v)
    {
        v *= 6;
        cout << "v: " << v << endl;
    } (j);
    return 0;
}
