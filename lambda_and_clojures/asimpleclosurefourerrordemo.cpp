
// this function shows how you can call a simple closure

#include <iostream>
using namespace std;

int main()
{
    int j = 7;
    [](int const & v) {
        v *= 6;
    } (j);
    cout << "the correct value is: " << j << endl;
    return 0;
}
